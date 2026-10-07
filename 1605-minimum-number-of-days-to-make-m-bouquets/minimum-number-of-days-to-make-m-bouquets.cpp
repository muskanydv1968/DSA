class Solution {
public:
int possible(vector<int>&bloomDay,int m,int k,int mid){
    int flower=0;
    int buke=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            flower++;
            if(flower==k){
                buke++;
                flower=0;
            }
        }else{
            flower=0;
        }
    }
    return buke>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required=1LL*m*k;
        if(bloomDay.size()<required){
            return -1;
        }
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            if(possible(bloomDay,m,k,mid)){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};