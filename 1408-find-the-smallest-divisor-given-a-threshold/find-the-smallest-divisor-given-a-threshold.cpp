class Solution {
public:
int sumdiv(vector<int>&nums,int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=ceil((double)(nums[i])/(double)(mid));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            if(sumdiv(nums,mid)<=threshold){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};