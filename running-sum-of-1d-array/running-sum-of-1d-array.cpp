class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int x=1;x<nums.size();x++)
        {
            nums[x]=nums[x]+nums[x-1];
        }
        /*
        vector<int> o;
        for(int x=0;x<nums.size();x++)
        {
            o[x]=nums[x];
        }
        */
        return nums;
    }
};