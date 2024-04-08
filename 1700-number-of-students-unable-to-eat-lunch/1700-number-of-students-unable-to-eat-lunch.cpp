class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        for(int i = 0;i<students.size();i++){
            q.push(students[i]);
        }
        for(int i = sandwiches.size()-1;i>=0;i--){
            s.push(sandwiches[i]);
        }
        while(s.size() > 0){
            int n = q.size();
            for(int i = 0;i<n;i++){
                if(q.front() == s.top()){
                    s.pop();
                }
                else{
                    q.push(q.front());
                }
                q.pop();
            }
            if(s.size() == n){
                break;
            }
        }
        return q.size();
    }
};