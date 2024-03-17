class Solution {
public:
    
    int por(int num){
        
        
     if(num==0) return false;
        
     if(num==1){
         return true;
     }
        
        if(num%3==0){
            return por(num/3);
        }
        
        return false;
    }
    bool isPowerOfThree(int n) {
        
       return por(n);
        
    }
};