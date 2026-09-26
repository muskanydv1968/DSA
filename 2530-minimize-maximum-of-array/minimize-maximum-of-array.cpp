class Solution {
public:
bool isvalid(vector<int>&nums,int mid,int n){
    long long sum = 0;

    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if(sum >1LL* mid * (i + 1)) {
            return false;
        }
    }

    return true;
}
//     vector<long long>arr(begin(nums),end(nums));
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>mid){
//             long long buffer=arr[i]-mid;
//             arr[i]=mid;
//             arr[i+1]=arr[i+1]+buffer;
//         }
//     }
//     return arr[n-1]<=mid;
// }
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        int maxl=0;
        int maxr=*max_element(begin(nums),end(nums));
        int result=0;
        while(maxl<=maxr){
            int mid=maxl+(maxr-maxl)/2;
            if(isvalid(nums,mid,n)){
                result=mid;
                maxr=mid-1;
            }else{
                maxl=mid+1;
            }

        }
        return result;
    }
};