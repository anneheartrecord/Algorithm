class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int l [nums.size()];
         int r [nums.size()];
        l[0]=1;
        for(int i=1;i<nums.size();i++)
        l[i]=l[i-1]*nums[i-1];
        r[nums.size()-1]=1;
        for(int j=nums.size()-2;j>-1;j--)
        r[j]=r[j+1]*nums[j+1];
        for(int i=0;i<nums.size();i++)
        nums[i]=l[i]*r[i];
         return nums;
    }
};
