#include <iostream>
#include <limits>
#include <vector>

unsigned int profit_on2(const std::vector<unsigned int> & input){
    unsigned int diff = 0;
    for (auto p_it = input.cbegin(); p_it != input.cend(); p_it++){
        for (auto n_it = std::next(p_it); n_it != input.cend(); n_it++){
            if (*n_it > *p_it && *n_it - *p_it > diff) {
                diff = *n_it - *p_it;
            }
        }
    }
    return diff;
}

unsigned int profit_n(const std::vector<unsigned int> & input){
    unsigned int min_price = input.front();
    unsigned int max_profit = 0;
    unsigned int diff = 0;
    for (auto & p : input){
        if (p > min_price)
            diff = p - min_price;
        if (diff > max_profit)
            max_profit = diff;
        if (p < min_price)
            min_price = p;
    }
    return max_profit;
}

int main() {
    std::vector<unsigned int> prices =
            {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    std::cout << profit_n(prices) << std::endl;
    return 0;
}