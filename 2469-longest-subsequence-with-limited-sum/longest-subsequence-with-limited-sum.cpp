class Solution {
public:
int binarysearch(vector<int>&nums,int n,int target){
    int l=0;
    int r=n-1;
    int mid=l+(r-l)/2;
    int idex=-1;
    while(l<=r){
       int mid=l+(r-l)/2;
       if(nums[mid]<=target){
        idex=mid;
        l=mid+1;
       }else{
        r=mid-1;
       }
    }
    return idex+1;
}
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        vector<int>result;
        sort(begin(nums),end(nums));
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int &queri:queries){
            int cnt =binarysearch(nums,n,queri);
        
        result.push_back(cnt);
        }
        return result;
    }
};