class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int left1=0,left2=0;
        int r1=nums1.size()-1;
        int r2=nums2.size()-1;
        
        while(left1<=r1 && left2<=r2){
            if(nums1[left1]==nums2[left2]){
                return nums1[left1];
            }
            
            if(nums1[left1]<nums2[left2]){
                    left1++;
                }
                else {
                    left2++;
                }
            
            if(nums1[r1]<nums2[r2]){
                r2--;
            }else if(nums1[r1]==nums2[r2]){
                //nothing
            }
            else{
                r1--;
            }
        }
        
        return -1;
    }
};