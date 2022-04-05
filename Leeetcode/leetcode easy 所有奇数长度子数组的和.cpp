class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        long long int sum=0;
        int presum[arr.size()+1];
        presum[0]=0;
        for(int i=0;i<arr.size();i++)
        presum[i+1]=presum[i]+arr[i];
       for(int i=0;i<arr.size();i++) {
           for(int j=1;j+i<=arr.size();j+=2) {
              sum+=presum[i+j]-presum[i];
           }
       }
        return sum ;
    }

};
