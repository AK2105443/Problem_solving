class Solution {
public:
    string largestOddNumber(string num) {
        
        int strlen=num.length();
        for(int i=strlen-1;i>=0;i--){
            
            if((num[i]-'0')%2!=0){
                return num.substr(0,i+1);
            }
        
        }
        return "";
    }
};