class Solution {
public:
    
    int sumofsq(int num){

        int sum=0;
        while(num)
        {
           
            sum+=pow(num%10,2);
            num/=10;
        }
        
        return sum;
    }
    
    bool isHappy(int n) {
        
        unordered_set<int> no_set;
        if(n<=0) return false;
        
        while(no_set.find(n)==no_set.end()){
            no_set.insert(n);
            n=sumofsq(n);
            if(n==1) return true;
            
        }
        
        
        return false;
        
    }
};