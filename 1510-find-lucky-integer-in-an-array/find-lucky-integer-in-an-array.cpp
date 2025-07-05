class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(auto x:arr){
            freq[x]++;
        }
        int ans=-1;
        for(auto y:freq){
            if(y.first==y.second){
                ans=max(ans,y.first);
            }
        }
        return ans;
    }
};