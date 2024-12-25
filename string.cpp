#include <boost/algorithm/string.hpp>
#include <iostream>
int main() {
    std::string input= "Msu\t Baku\t Lab";
    std::vector<std::string> result;
    boost::split(result, input, boost::is_any_of("\t"));
    for(const auto item:result) {
        std::cout<<item<<"\n";
    }
    return 0;
}