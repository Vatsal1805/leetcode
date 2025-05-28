class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total_sum=(n*(n+1))/2;
        int curr_sum=accumulate(nums.begin(),nums.end(),0);
         int x=total_sum-curr_sum;
         return x;
    }
};