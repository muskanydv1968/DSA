class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int dup=-1;
        int missing=-1;
        for(int i=0;i<n;i++){
            int val =abs(nums[i]);
            if(nums[val-1]<0){
                dup=val;

            }else{
                nums[val-1]*=(-1);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                missing=(i+1);
                break;
            }
        }
        return {dup,missing};
    }
};