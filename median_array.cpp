/*  Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0 && nums2.size()==0) return 0.0;
        for(auto i=nums2.begin();i!=nums2.end();i++){
            nums1.push_back(*i);
        }
        sort(nums1.begin(),nums1.end());
        if (nums1.size() % 2 != 0) 
        return (double)nums1[nums1.size() / 2]; 
  
    return (double)(nums1[(nums1.size() - 1) / 2] + nums1[nums1.size() / 2]) / 2.0; 
    }
};
