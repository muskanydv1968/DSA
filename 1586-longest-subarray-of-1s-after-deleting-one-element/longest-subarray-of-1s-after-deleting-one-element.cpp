class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int result=0;
        int zero=0;
        while(j<n){
            if(nums[j]==0){
                zero++;
            }
            if(zero>1){
                if(nums[i]==0){
                zero--;

            }
            i++;
            }
            result=max(result,j-i);
            j++;

        }
        return result;
    }
};