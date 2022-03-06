class Solution {
public:
    int countOrders(int n) {
        int mod = 1e9 + 7;
        unsigned long long int ans = 1;
        for(int i=1;i<=n;i++){
            ans = ans * i;
            ans = ans * (2*i - 1);
            ans = ans % mod;
        }
        
        return ans%mod;
    }
};