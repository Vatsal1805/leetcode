class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> count;
        int maxFreq = 0;
        int result = -1;

        for (int num : nums) {
            if (num % 2 == 0) {
                count[num]++;
                if (count[num] > maxFreq) {
                    maxFreq = count[num];
                    result = num;
                } else if (count[num] == maxFreq) {
                    result = min(result, num); 
                }
            }
        }

        return result;
    }
};