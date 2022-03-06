class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int dp[10001];
        vector<int> freq;
        freq.assign(10001,0);
        for(auto x:nums){
            freq[x]++;
        }
        
        dp[0] = 0;
        dp[1] = freq[1];
        
        for(int i = 2;i<10001;i++){
            if(dp[i-2]+i*freq[i] > dp[i-1])
                dp[i] = dp[i-2] + i*freq[i];
            else
                dp[i] = dp[i-1];
        }
        
        return dp[10000];
               
    }
};