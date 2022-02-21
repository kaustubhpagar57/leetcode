class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        for(auto x:nums){
            freq[x]++;
        }
        
        int maxx = INT_MIN;
        int ele;
        for(auto it = freq.cbegin(); it!=freq.cend(); it++){
            if(it->second > maxx){
                maxx = it->second;
                ele = it->first;
            }
            
        }
        
        return ele;
    }
};