#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        stack<int> st;
        int third = INT_MIN;

        // Iterate from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < third) {
                return true; // Found nums[i] < third < nums[j]
            }

            // Pop all elements smaller than nums[i] (they could be nums[k])
            while (!st.empty() && nums[i] > st.top()) {
                third = st.top(); // Update 'third'
                st.pop();
            }

            st.push(nums[i]); // nums[i] might be a future nums[j]
        }

        return false;
    }
};
