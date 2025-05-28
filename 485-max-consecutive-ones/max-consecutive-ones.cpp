class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max_i=0;
        int count=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            count++;
            else
            {
                max_i=max(max_i,count);
                count=0;
            }
        }
        max_i=max(max_i,count);
          return max_i; 
    }
};