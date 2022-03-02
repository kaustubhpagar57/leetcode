class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(j<s.length() && i<t.length()  ){
            if(s[j] == t[i])
                j++;
            i++;
        }
        
        if(j==s.length())
            return true;
        
        return false;
    }
};