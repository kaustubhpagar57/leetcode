class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int min, max;
        vector<string> ans;
        
        if(nums.size() == 0)
            return ans;
        
        for(int i=0;i<nums.size();i++){
            string s;
            
            min = nums[i];
            while(i+1<nums.size() && nums[i+1] == nums[i] + 1){
                i++;
            }
            max = nums[i];
            
            if(min == max){
                s += to_string(min);
            }
            else{
                s += to_string(min);
                s.push_back('-');
                s.push_back('>');
                s += to_string(max);
            }
            
            ans.push_back(s);
        }
        
        return ans;
            
    }
};