class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sets;
        int left=0,maxlen=0;

        for(int right=0;right<s.length();right++){
            while(sets.find(s[right])!=sets.end()){
                sets.erase(s[left++]);
            }
            sets.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};