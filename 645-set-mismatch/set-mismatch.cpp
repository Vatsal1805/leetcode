class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n=nums.size();
        vector<int>freq(n+1,0);
        int repeat=-1,missing=-1;

        for(int i=0;i<n;i++)
        freq[nums[i]]++;

        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0) missing=i;
            else if(freq[i]==2) repeat=i;
        }
        return {repeat,missing};
    }
};