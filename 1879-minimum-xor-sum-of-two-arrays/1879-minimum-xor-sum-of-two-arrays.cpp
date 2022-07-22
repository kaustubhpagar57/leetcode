class Solution {
public:

int dp[20][16400];
int n;

//idx tell which elment is choose from array nums1
//if ith bit is sei in bitmask then it means ith element from nums2 is choosen

int solve(vector<int>& nums1,vector<int>& nums2,int idx,int bitmask){

    if(idx == n)          
       return 0;
  
    if(dp[idx][bitmask]!= -1)
    return dp[idx][bitmask]; 

    int ans = 1e9;
    for(int i = 0;i < n;i++){
        
        int val = (bitmask & (1 << i));
        
        if(val == 0){ 
 int a = (nums1[idx]^nums2[i]) + solve(nums1,nums2,idx+1,bitmask | (1 << i)); 
 ans = min(ans,a);           
        }
        
        
    }


   return dp[idx][bitmask] = ans;
}
int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
   
    
    memset(dp,-1,sizeof(dp));
    n = nums1.size();
    return solve(nums1,nums2,0,0); 
}
};