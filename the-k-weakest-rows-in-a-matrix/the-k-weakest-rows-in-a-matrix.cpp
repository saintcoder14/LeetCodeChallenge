class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>p;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            p.push_back(pair<int,int>(count,i));
        }
        sort(p.begin(),p.end());
        vector<int>res;
        for(int i=0;i<p.size();i++){
            if(k==0)
                break;
            k--;
            res.push_back(p[i].second);
        }
                return res;
        }
};