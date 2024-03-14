class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int n=nums.size();
        unordered_map<int ,int > mp;
        
        int res=0;
        int current_sum=0;
        mp[0]=1;
        for(int &num:nums){
            current_sum+=num;
            
            int remain=current_sum-goal;
            if(mp.find(remain)!=mp.end()){
                res+=mp[remain];
            }
            
            mp[current_sum]++;
        }
        
        return res;
        
        
    }
};