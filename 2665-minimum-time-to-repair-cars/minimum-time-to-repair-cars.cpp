class Solution {
public:
typedef long long ll;
bool possible(vector<int>&ranks,ll mid,int cars){
    ll carfixed=0;
    for(int i=0;i<ranks.size();i++){
        ll repaired =(ll)sqrt(mid/(long double)ranks[i]);
        carfixed+=repaired;
        if(carfixed>=cars){
            return true;
        }
    }
    return false;
}
    long long repairCars(vector<int>& ranks, int cars) {
        ll l=1;
        int maxr=*max_element(begin(ranks),end(ranks));
        ll r=maxr*1LL*cars*cars;
        ll result=-1;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(possible(ranks,mid,cars)==true){
                result=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return result;
    }
};