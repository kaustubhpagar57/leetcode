class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1len = s1.length();
        int s2len = s2.length();
        if(s1len > s2len)
            return false;
        
        unordered_map<char, int> freq;
        unordered_map<char, int> freq2;

        
        for(int i=0;i<s1len;i++){
            freq[s1[i]]++;
            freq2[s2[i]]++;
        }
        
        int k = 0;
        for(int i=s1len;i<s2len;i++){
            if(freq == freq2)
                return true;
            
            freq2[s2[i]]++;
            
            if(freq2[s2[k]] == 1)
                freq2.erase(s2[k]);
            else
                freq2[s2[k]]--;
            
            k++;
        }
        
        if(freq == freq2)
            return true;
        
        return false;
    }
};