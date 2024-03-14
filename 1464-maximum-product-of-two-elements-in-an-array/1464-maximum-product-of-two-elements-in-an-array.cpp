class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
//         int n=nums.size();
//         int maxi;
//         int no;
        
//         for(int i=0;i<n;i++){
//             for(int j=1;j<n;j++){
                
//                 maxi=((nums[i]-1)*(nums[j]-1));
//                 no=maxi;
//                 return max(no,maxi);
        
        //largest and second largest
        
        int n=nums.size();
        int largest=0;
        int second_l=0;
        
        for(int i=0;i<n;i++){
            
            
            if(nums[i]>largest){
                second_l=largest;
                largest=nums[i];
                
            }
            else{
               second_l=max(second_l,nums[i]);
            }
            
        }
        
        int res=(largest-1)*(second_l-1);
        
                
                
            
        return res;
        
        
        
    }
};