#include "../include/bracket_reversal.hpp"
#include <cassert>
#include <iostream>


void runTests() {

    assert(minimumReversal("()()") == 0);

    assert(minimumReversal(")(") == 1);

    assert(minimumReversal("))((") == 2);

    assert(minimumReversal("((((") == 2);

    assert(minimumReversal("))))") == 2);

    assert(minimumReversal("") == 0);

    std::cout << "All tests passed successfully!" << std::endl;
}


int main() {

    runTests();

    return 0;
}