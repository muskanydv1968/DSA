class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        // int n=nums.size();
        int i=0;
        int j=n-1;
        int k=n-1;
        while(i<=j){
            if(abs(nums[i])<abs(nums[j])){
                res[k]=nums[j]*nums[j];
                j--;
            }else{
                res[k]=nums[i]*nums[i];
                i++;
            }
            k--;
        }
        return res;
    }
};