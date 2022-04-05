 class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int presum[nums.size()+1];
        int result=100000000;
        bool flag=false; 
        for(int i=0;i<nums.size();i++)
        presum[i+1]=presum[i]+nums[i];
        for(int i=0;i<=nums.size();i++){
            for(int j=i+1;j<nums.size()+1;j++){
                if(presum[j]-presum[i]>=target) {
                    if(j-i<result) {
                        result=j-i;
                        flag=true;
                    }
                }
            }
        }
        if (!flag) {
            result=0;
        }
        return result ;
    }
};
