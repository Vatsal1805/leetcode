class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;
        for(int c:nums){
            count[c]++;
        }
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]>1)
            return true;
        }
        return false;
    }
};