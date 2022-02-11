class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int n = num;
            int x = 0;
            while(n>0){
                x = x + (n%10);
                n = n/10;
            }
            num = x;
        }
        return num;
    }
};