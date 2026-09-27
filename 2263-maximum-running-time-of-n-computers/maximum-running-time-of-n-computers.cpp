class Solution {
public:
   typedef long long ll;
   bool possible(vector<int>&batteries,ll mid,int n){
    ll target=(ll)n*mid;
    ll sum=0;
    for(int i=0;i<batteries.size();i++){
        sum+=min((ll)batteries[i],mid);

    }
    if(sum>=target){
        return true;
    }
    return false;
   }
    long long maxRunTime(int n, vector<int>& batteries) {
        ll l=*min_element(begin(batteries),end(batteries));
        // int r;
        ll totalsum=0;
        for(auto mints:batteries){
            totalsum+=mints;
        }
        ll r=totalsum/n;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(possible(batteries,mid,n)){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return r;
        
    }
};