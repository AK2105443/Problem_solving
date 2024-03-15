class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        
        char mxchr=' ';
        for(int i=2;i<n;i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                mxchr=max(mxchr,num[i]);
            }
        }
        
        if(mxchr==' '){
            return "";
        }
        
        return string(3,mxchr);
    }
};