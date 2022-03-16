class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int j = 0;
        for(int i=0;i<pushed.size();){
            s.push(pushed[i]);
            while(!s.empty() && popped[j] == s.top()){
                s.pop();
                j++;
                
            }
            i++;
        }
        
        if(s.empty())
            return true;
        
        return false;
    }
};