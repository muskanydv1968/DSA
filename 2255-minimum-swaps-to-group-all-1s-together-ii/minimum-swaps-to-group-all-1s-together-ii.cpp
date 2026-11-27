class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>temp(2*n);
        for(int i=0;i<2*n;i++){
            temp[i]=nums[i%n];
        }
        int totalone=accumulate(nums.begin(),nums.end(),0);
        int i=0;
        int j=0;
        int curr=0;
        int len=0;
        while(j<2*n){
            if(temp[j]==1){
                curr++;

            }
            if(j-i+1>totalone){
                curr-=temp[i];
                i++;
            }
            len=max(len,curr);
            j++;
        }
        return totalone-len;
    }
};