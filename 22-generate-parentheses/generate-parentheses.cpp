#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        std::string current = "";
        backtrack(result, current, 0, 0, n);
        return result;
    }

private:
    void backtrack(std::vector<std::string>& result, std::string& current, int openCount, int closeCount, int maxPairs) {
        // Base case: If the current string reaches the maximum required length, add it to results
        if (current.length() == maxPairs * 2) {
            result.push_back(current);
            return;
        }

        // Rule 1: We can always add an opening parenthesis if we haven't reached 'n' yet
        if (openCount < maxPairs) {
            current.push_back('(');
            backtrack(result, current, openCount + 1, closeCount, maxPairs);
            current.pop_back(); // Backtrack
        }

        // Rule 2: We can only add a closing parenthesis if it matches an existing opening one
        if (closeCount < openCount) {
            current.push_back(')');
            backtrack(result, current, openCount, closeCount + 1, maxPairs);
            current.pop_back(); // Backtrack
        }
    }
};