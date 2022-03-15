class Solution {
public:
    string simplifyPath(string path) {
        string ans = "";
        stack<string> s;
        for(int i=0;i<path.length();i++){
            string temp = "";
            
            if(path[i] == '/'){
                continue;
            }
            
            while((path[i]>=48 && path[i]<=57) || (path[i]>=65 && path[i]<=90) || (path[i]>=97 && path[i]<=122) || path[i]=='_' || path[i] == '.'){
                temp += path[i];
                i++;
            }
            
            if(temp == "."){
                continue;
            }
            else if(temp == ".."){
                if(!s.empty()){
                    s.pop();
                    continue;
                }
            }
            else
                s.push(temp);
        }
        
        if(s.empty())
            return "/";
        
        while(!s.empty()){
            ans = '/' + s.top() + ans;
            s.pop();
        }
        
        return ans;
    }
};









