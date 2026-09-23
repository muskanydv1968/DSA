class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int op=0;
        for(int i=n-1;i>=1;i--){
            if(nums[i]==nums[i-1]){
            continue;
            }
            op+=(n-i);
        }
        return op;
    }
};