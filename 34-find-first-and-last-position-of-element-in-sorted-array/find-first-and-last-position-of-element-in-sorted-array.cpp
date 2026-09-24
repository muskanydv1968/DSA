class Solution {
public:
int right(vector<int>&nums,int target,int n){
    // int n=nums.size();
    int l=0;
    int r=n-1;
    int righty=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            righty=mid;
            l=mid+1;
        }else if(nums[mid]>target){
            r=mid-1;
        }else {
            l=mid+1;
        }

        // return righty;
    }
     return righty;
}
int left(vector<int>&nums,int target,int n){
    // int n=nums.size();
    int l=0;
    int r=n-1;
    int lefty=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            lefty=mid;
            r=mid-1;
        }else if(nums[mid]<target){
            l=mid+1;
        }else {
            r=mid-1;
        }

        // return lefty;
    }
     return lefty;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int leftmost=left(nums,target,n);
        int rightmost=right(nums,target,n);
        return {leftmost,rightmost};
    }
};