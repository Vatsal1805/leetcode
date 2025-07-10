class Solution {
public:
    void backtrack(int open, int close, string current, vector<string>& result, int n) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            backtrack(open + 1, close, current + '(', result, n);
        }

        if (close < open) {
            backtrack(open, close + 1, current + ')', result, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(0, 0, "", result, n);
        return result;
    }
};
