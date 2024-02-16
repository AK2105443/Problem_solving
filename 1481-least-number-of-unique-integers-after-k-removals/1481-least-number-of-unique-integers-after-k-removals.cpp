class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        
        for(int &x : arr) {
            mp[x]++;
        }

        priority_queue<int, vector<int>, greater<int>> pq; //min-heap
        for(auto &it : mp) {
            pq.push(it.second);
        }

        
        while(!pq.empty()) {
            
            k -= pq.top();
            
            
            if(k < 0) {
                return pq.size();
            }
            
            pq.pop();
        }
        
        return 0; //All were removed
    }
};