class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        // if(nums.size()==1)
        // return 0;
        while(st<end){
            int mid=st+(end-st)/2;
            // if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1])
            // return mid;

            if(nums[mid]<nums[mid+1])
            st=mid+1;

            else
            end=mid;
        }
        return st;
    }
};