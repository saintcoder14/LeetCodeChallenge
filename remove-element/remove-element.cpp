class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int r=n-1,count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                count++;   
            }
        }
        for(int i=0;i<n-count;i++){
            if(nums[i]==val)
            {
                int temp=nums[r];
                nums[r]=nums[i];
                nums[i]=temp;
                r--;
            }
        }
        return n-count;
    }
};