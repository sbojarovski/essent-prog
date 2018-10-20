#include <iostream>
#include <set>

bool can_construct_letter(
        const std::string & M,
        const std::string & L){
    std::multiset< char > histogramM(M.begin(), M.end());
    std::multiset< char > histogramL(L.begin(), L.end());
    for (auto l:histogramL){
        if (histogramM.count(l) < histogramL.count(l))
            return false;
    }
    return true;
}

int main() {
    std::string M = "QQWWEERRTTYYUUIIOOPPAASSDDFFFGGHJJKKLLLLMMNNBVVCCXZZZXCCXBNMM";
    std::string L = "AABBCCCCCCCCCC";
    std::cout << can_construct_letter(M, L) << std::endl;
    return 0;
}