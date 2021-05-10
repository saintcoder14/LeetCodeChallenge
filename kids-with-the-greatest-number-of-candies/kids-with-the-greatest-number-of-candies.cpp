class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l=candies.size();
        vector<bool>res;
        int max=0;
        for(int i=0;i<l;i++){
            if(candies[i]>max)
                max=candies[i];
        }
        for(auto i:candies){
            if((i+extraCandies)>=max)
                res.push_back(true);
            else
                res.push_back(false);

        }
        return res;
    }
};