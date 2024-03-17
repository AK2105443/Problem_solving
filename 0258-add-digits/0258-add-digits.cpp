class Solution {
public:
    int addDigits(int num) {
        
//         int sum=0;
//         if(num==0) return num;
//         // if(num>=1 && num<=9) return num;
        
//         while(num>=10){
//             while(num>0)
//             {
//             int rem=num%10;
//             sum+=rem;
//             num/=10;
//             }
            
            
            
//         }
        
//         return sum;
        
        if(num==0) return 0;
        
        if(num%9==0) return 9;
        
        return num%9;
        
    }
};