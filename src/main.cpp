#include <iostream>
#include "bracket_reversal.hpp"

int main() {

    std::string input;

    std::cout << "Enter bracket sequence: ";
    std::cin >> input;

    int result = minimumReversal(input);

    std::cout << "Minimum reversals required: "
              << result
              << std::endl;

    return 0;
}