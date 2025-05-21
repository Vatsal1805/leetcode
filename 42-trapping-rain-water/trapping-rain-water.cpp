class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> larr(n,0),rarr(n,0);
        int trappedwater=0;
        int lmax=INT_MIN;
        for(int i=0;i<n;i++){
            lmax=height[i]>lmax?height[i]:lmax;
            larr[i]=lmax;
        }
        int rmax=INT_MIN;
        for(int i=n-1;i>=0;i--){
            rmax=height[i]>rmax?height[i]:rmax;
            rarr[i]=rmax;
        }
        for(int i=0;i<n;i++){
            trappedwater+=min(larr[i],rarr[i])-height[i];
        }return trappedwater;
        

    }
};