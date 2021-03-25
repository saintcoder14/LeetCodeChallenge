class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int l=mat.size();
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++)
            {
                if(i==j||j+i==l-1)
                    sum+=mat[i][j];
            }
        }
        return sum;
    }
};