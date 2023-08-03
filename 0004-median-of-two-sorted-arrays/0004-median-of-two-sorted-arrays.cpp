#include <vector>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        std::sort(nums3.begin(), nums3.end());
        int size = nums3.size();
        double result;
        if(size%2==0){
            //get the middle value of 2 median values
            result=nums3[size/2]+nums3[size/2-1];
            result/=2;
            
        }else{
            result=nums3[(size-1)/2];
        }
        return result;
    }
};