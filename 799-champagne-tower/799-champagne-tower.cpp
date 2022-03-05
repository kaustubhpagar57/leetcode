class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double tower[101][101];
        
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                tower[i][j] = 0.0;
            }
        }
        
        tower[0][0] = poured;
        for(int i=0;i<100;i++){
            for(int j=0;j<=i;j++){
                if(tower[i][j] >=1){
                    tower[i+1][j] += (tower[i][j] - 1)/2.0;
                    tower[i+1][j+1] += (tower[i][j] - 1)/2.0;
                    tower[i][j] = 1;
                }
            }
        }
        
        return tower[query_row][query_glass];
    }
};