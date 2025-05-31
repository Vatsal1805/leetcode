class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,int>count;
        for(char c:s)
        count[c]++;
        for(int i=0;i<n;i++){
            if(count[s[i]]==1){
                return i;
                break;
            }
        }


        
        return -1;
    }
};