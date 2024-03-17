class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
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
        
    }
};