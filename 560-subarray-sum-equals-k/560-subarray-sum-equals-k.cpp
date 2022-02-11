class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix;
        int sum = 0;
        int count = 0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            prefix.push_back(sum);            
        }
        
        unordered_map<int, int> freq;
        
        for(int i=0;i<n;i++){
            if(prefix[i] == k)
                count++;
            
            if(freq.find(prefix[i] - k) != freq.end())
                count += freq[prefix[i] - k];
            
            freq[prefix[i]]++;
        }
        return count;
    }
};