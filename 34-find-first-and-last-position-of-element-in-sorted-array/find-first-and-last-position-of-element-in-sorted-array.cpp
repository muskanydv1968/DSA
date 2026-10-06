class Solution {
public:
int first(vector<int>&nums,int n,int target){
    int l=0;
    int r=n-1;
    int first=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            first=mid;
            r=mid-1;
        }else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return first;
}
int last(vector<int>&nums,int n,int target){
    int l=0;
    int r=n-1;
    int last=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            last=mid;
            l=mid+1;
        }else if(nums[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int firstouccurence=first(nums,n,target);
        if(firstouccurence==-1) return {-1,-1};
        int lastouccurence=last(nums,n,target);
        return {firstouccurence,lastouccurence};
    }
};