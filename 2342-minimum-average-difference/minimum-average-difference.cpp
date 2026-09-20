class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long long ls=0;
        long long rs=0;
        int result=INT_MAX;
        int index=-1;
        for(int i=0;i<n;i++){
            ls+=nums[i];
            rs=sum-ls;
            int n1=i+1;
            int n2=n-n1;
            long long leftavg=ls/n1;
            long long rightavg=(i==n-1)?0:rs/n2;
            int diff=abs(rightavg-leftavg);
            if(result>diff){
                result=diff;
                index=i;
            }
        }
        return index;
    }
};