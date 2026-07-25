#include "bracket_reversal.hpp"

int minimumReversal(const std::string& brackets) {
    int balance = 0;
    int reversals = 0;

    for (char bracket : brackets) {

        if (bracket == '(') {
            balance++;
        } 
        else if (bracket == ')') {
            balance--;
        }

        // Unmatched closing bracket
        if (balance < 0) {
            reversals++;
            balance += 2;
        }
    }

    // Remaining unmatched opening brackets
    reversals += balance / 2;

    return reversals;
}