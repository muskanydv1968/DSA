class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxe=*max_element(nums.begin(),nums.end());
        // int n=nums.size();
        int i=0;
        int j=0;
        int n=nums.size();
        long long result=0;
        int cntmax=0;
        while(j<n){
            if(nums[j]==maxe){
                cntmax++;

            }
            while(cntmax>=k){
                result+=n-j;
                if(nums[i]==maxe){
                    cntmax--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};