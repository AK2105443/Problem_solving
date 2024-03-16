class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }
        
        long long rev=0;
        long long tmp=x;
        while(tmp!=0){
            int dizit=tmp%10;
            rev=rev*10+dizit;
            tmp=tmp/10;
        }
        
        if(rev==x){
            return true;
        }
        
        return false;
        
        
    }
};