class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(first==-1)first=i;
                last=i;
            }
        }
        return {first, last}; 
        // if(first!=-1){
        //     cout<<first<<" "<<last<<endl;
        // }
        // else{
        //     return -1;
        // }
        // return 0;
    }
};