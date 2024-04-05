class Solution {
public:
    string makeGood(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
                int n=s1.size();
                if(n && (s[i]-32==s1[n-1] || s[i]==s1[n-1]-32)){
                    s1.pop_back();
                }
                else{
                    s1.push_back(s[i]);
                }
        }
        return s1;

    }
};