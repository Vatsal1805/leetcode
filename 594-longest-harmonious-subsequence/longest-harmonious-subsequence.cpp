class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int v:nums)
        freq[v]++;

        int maxl=0;
        for(auto &[val,cnt]:freq){
            if(freq.count(val+1)){
                maxl=max(maxl,cnt+freq[val+1]);
            }
        }
        return maxl;
        
    }
};