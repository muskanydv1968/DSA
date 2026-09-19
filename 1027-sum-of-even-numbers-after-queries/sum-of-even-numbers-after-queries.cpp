class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
        int sumeven=0;
        for(int x:nums){
            if(x%2==0){
            sumeven+=x;
        }
        }
        vector<int>result;
        for(int i=0;i<m;i++){
            int val=queries[i][0];
            int index=queries[i][1];
            if(nums[index]%2==0){
                sumeven-=nums[index];
            }
            nums[index]+=val;
            if(nums[index]%2==0){
                sumeven+=nums[index];
                // result.push_back(sumeven);
            }
             result.push_back(sumeven);
        }
        return result;
        
    }
};