class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      
        /*
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                nums.remove(nums.begin()+i-1);
            }
        }
        
        return nums.size();
        */
        
        int n=nums.size();
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                nums[idx]=nums[i];
                idx++;
                
            }
        }
        return idx;
        
    }
};