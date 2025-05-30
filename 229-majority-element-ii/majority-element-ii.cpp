class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int n = nums.size();
        vector<int> result;

        for (int num : nums) {
            count[num]++;
        }

        for (auto& [key, val] : count) {
            if (val >n / 3) {
                result.push_back(key);
               
            }
        }

        return result;
    }
};