class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for(int i = 0;i<s.length();i++){
            char temp = s[i];
            if(temp == '(' || temp == '{' || temp == '['){
                stk.push(temp);
            }
            else{
                if(stk.empty())
                    return false;
                
                char last = stk.top();
                switch(temp){
                    case ')': if(last != '(') return false; break;
                    case ']': if(last != '[') return false; break;
                    case '}': if(last != '{') return false; break;
                }
                stk.pop();
            }
        }
        
        if(!stk.empty())
            return false;
        
        return true;
    }
};