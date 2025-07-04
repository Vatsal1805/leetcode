class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>match;
        for(auto s:strs){
            string dummy=s;//store for sorting
            sort(dummy.begin(),dummy.end());//sort string
            match[dummy].push_back(s);
            //take sorted string as key so we can match and group anagrams
        }
        vector<vector<string>>result;
        for(auto t:match)
        result.push_back(t.second);
        //from set fetch the original value which we mapped with key(sorted list)
        return result;
    }
};