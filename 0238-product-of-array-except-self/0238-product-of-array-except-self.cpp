class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>leftp(n);
        vector<int>rightp(n);
        vector<int>rslt(n);
        
         leftp[0]=1;
         rightp[n-1]=1;
        
        for(int i=1;i<n;i++){
            
            leftp[i]=leftp[i-1]*nums[i-1];
            
            
        }
        for(int i=n-2;i>=0;i--){
            rightp[i]=rightp[i+1]*nums[i+1];
        }
        
        for(int i=0;i<n;i++){
            rslt[i]=leftp[i]*rightp[i];
        }
        
        return rslt;
        
    }
};