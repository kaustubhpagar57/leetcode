class Solution {
public:
    int titleToNumber(string columnTitle) {
        int row = 0;
        int power = 0;
        int base = pow(26, columnTitle.length() - 1);
        for(auto it = columnTitle.rbegin(); it!=columnTitle.rend(); it++){
            int x = *it;
            row = row + pow(26, power)*(x-64);
            power++;
        }
        return row;
    }
};