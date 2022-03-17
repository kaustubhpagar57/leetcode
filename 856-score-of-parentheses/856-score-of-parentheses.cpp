class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0;
        int score = 0;
        char prev = '(';
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                depth++;
            }
            else{
                depth--;
                if(prev == '(')
                    score += pow(2,depth);
            }
            
            prev = s[i];
        }
        
        return score;
    }
};