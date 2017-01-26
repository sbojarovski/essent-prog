// author: stefan, Jan 2017

// Computing the parity of a word
// Parity(n) = 1 if number of 1s in n is odd, otherwise Parity(n) = 0

// Hint: use a lookup table, but with modulus

#include <iostream>
#include <map>

int main(){
    std::map<int, bool> parity;

    int n, orig_n = 0;
    while(orig_n != 13){
        std::cout << "number: ";
        std::cin >> n;
        orig_n = n;
        auto pit = parity.find(n);
        if(pit != parity.end()){
            std::cout << "parity found: " << pit->second << "\n";
            continue;
        }
        bool even = false;
        while (n > 0) {
            std::cout << n % 2 << " ";
            even = even ^ (n % 2 != 0);
            n /= 2;
        }
        parity[orig_n] = even;
        std::cout << "parity: " << even << "\n";
    }
    return 0;
}
