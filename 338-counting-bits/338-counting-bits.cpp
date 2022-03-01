class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            int ones = 0;
            int num = i;
            while(num !=0 ){
                ones += num%2;
                num = num/2;
            }
            ans.push_back(ones);
        }
        
        return ans;
    }
};