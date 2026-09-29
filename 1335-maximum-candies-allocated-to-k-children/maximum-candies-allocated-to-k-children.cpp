class Solution {
public:
typedef long long ll;
int possible(int mid,vector<int>&candies,long long k){
    ll children=0;
    for(int candi:candies){
        children+=candi/mid;
    if(children>=k){
        return true;
    }
    }
    return false;
}
    int maximumCandies(vector<int>& candies, long long k) {
        // int m=candies.size();
         ll l=1;
        ll r=*max_element(begin(candies),end(candies));
        ll result=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(mid,candies,k)){
                result=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return result;

    }
};