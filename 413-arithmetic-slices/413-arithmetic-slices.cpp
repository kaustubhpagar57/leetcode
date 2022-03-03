class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        
        
        vector<int> diffs;
        int count = 0 ;
        for(int i=0;i<nums.size()-1;i++){
            diffs.push_back(nums[i+1] - nums[i]);
        }
        
        for(int i=0;i<diffs.size()-1;i++){
            for(int j=i+1;j<diffs.size();j++){
                if(diffs[j] == diffs[i])
                    count++;
                else
                    break;
            }
        }
        
        return count;
    }
};