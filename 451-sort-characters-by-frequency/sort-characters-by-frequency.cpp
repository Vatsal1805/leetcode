class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        int maxFreq = s.size();
        vector<vector<char>> buckets(maxFreq + 1);
        for (auto& [ch, count] : freq) {
            buckets[count].push_back(ch);
        }
        string result;
        for (int i = maxFreq; i >= 1; --i) {
            for (char ch : buckets[i]) {
                result += string(i, ch);
            }
        }

        return result;
    }
};
