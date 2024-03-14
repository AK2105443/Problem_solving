class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        // vector<int>ans;
        
//         int a;
        
//         for(int i=0;i<n;i++){
//             a=nums[i];
//             a=a*a;
//             ans.push_back(a);
            
//         }
        
        
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        
        }
        
       
        
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};