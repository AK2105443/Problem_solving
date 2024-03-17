class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
      /*  int n=nums.size();
        set<int>my_set;
        for(int i=0;i<n;i++){
            my_set.insert(nums[i]);
        }
        
        
         nums.clear();
        for(auto i: my_set)
        {
            nums.push_back(i);
        }
        return my_set.size();
        */
//         two ptr
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            
            if(nums[i]!=nums[cnt]){
                cnt++;
                nums[cnt]=nums[i];
                
            }
            
        }
        return cnt+1;
    }
};