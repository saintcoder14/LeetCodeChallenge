class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int num1=(n*(n+1))/2;
        int num2=0;
        for(int i=0;i<n;i++){
            num2=num2+nums[i];
        }
        return (num1-num2);
    }
};