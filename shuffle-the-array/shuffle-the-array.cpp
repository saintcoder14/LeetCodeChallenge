class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> out(2*n,0);
        int left=0, right=n;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0){
                out[i]=nums[left];
                left++;
            }
            else{
                out[i]=nums[right];
                right++;
            }
        }
        return out;
    }
};