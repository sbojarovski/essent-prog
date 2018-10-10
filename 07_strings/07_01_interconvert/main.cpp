#include <iostream>

#include "vector_io.h"

std::string intToString(int & input){
    std::string output = "";
    bool got_minus = input < 0;
    if (input == 0)
        return std::string("0");
    while(input) {
        char c = std::abs(input % 10) + 48;
        input /= 10;
        output.push_back(c);
    }
    if (got_minus)
        output.push_back('-');
    return std::string(output.rbegin(), output.rend());
}

int stringToInt(const std::string & input){
    int output = 0;
    bool got_minus = input.at(0) == '-';
    std::string::const_iterator ib = input.begin();
    if (got_minus)
        ib++;
    std::string rest(ib, input.end());
    for (auto c : rest){
        if(!std::isdigit(c)){
            throw std::invalid_argument("Character is not a digit");
        }
        output = 10 * output + (c - '0');
    }
    if (got_minus)
        output *= -1;
    return output;
}


int main() {
    std::vector<std::string> input = {
            "123",
            "-23",
            "0001",
            "-0",
            "a23",
            "2a2",
            "-a2",
            "-2a"
    };
    for (auto s:input){
        int to_int = 0;
        try{
            to_int = stringToInt(s);
        } catch(const std::invalid_argument & e){
            std::cout << s << " " << e.what() << std::endl;
            continue;
        }
        std::cout << to_int << std::endl;
    }

    std::vector<int> ints = {
            1,
            23,
            -0,
            -12,
            76567,
            0
    };

    for (auto i:ints){
        std::cout << intToString(i) << std::endl;
    }
    return 0;
}