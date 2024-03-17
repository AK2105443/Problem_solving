class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        reverse(digits.begin(),digits.end());
        
        
        int one=1;
        int i=0;
        while(one){
            
            if(i<n){
                if(digits[i]==9){
                    digits[i]=0;
                }else{
                    digits[i]+=1;
                    one=0;
                }
            }else{
                digits.push_back(1);
                one=0;
            }
            
            i+=1;
        
        }
        
        reverse(digits.begin(),digits.end());
        
        return digits;
        
        
        
        
    }
};