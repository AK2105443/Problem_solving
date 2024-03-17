class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans;
        while(columnNumber>0){
            columnNumber--;
            int remainder=columnNumber%26;
            char ch=remainder+'A';
            ans.push_back(ch);
            
            columnNumber /=26;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};