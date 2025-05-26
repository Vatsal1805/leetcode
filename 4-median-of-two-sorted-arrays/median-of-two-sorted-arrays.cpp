class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       double x;
        // vector<int>v3;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        int n = nums1.size() ;
        sort(nums1.begin(),nums1.end());

        //int n=nums1.size();

        if(n%2==0){
         x =(nums1[n/2] + nums1[(n/2)-1])/2.0;
         return x;}
     
        else{
         x =nums1[(n/2)];
         return x;}

    }
};