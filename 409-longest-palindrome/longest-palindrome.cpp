class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        // Count frequencies of each character
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto &entry : freq) {
            if (entry.second % 2 == 0) {
                length += entry.second;
            } else {
                length += entry.second - 1; // take even part
                hasOdd = true;
            }
        }

        if (hasOdd) {
            length += 1; // place one odd character in the middle
        }

        return length;
    }
};
