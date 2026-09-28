class Solution {
public:
int canmake(vector<int>&bloomDay,int mid,int k){
    int countday=0;
    int flower=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            countday++;
        }else{
            countday=0;
        }
        if(countday==k){
            flower++;
            countday=0;
        }
    }
    return flower;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int l=0;
        int r=*max_element(begin(bloomDay),end(bloomDay));
        int result=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(canmake(bloomDay,mid,k)>=m){
                result=mid;
                r=mid-1;

            }else{
                l=mid+1;
            }
        }
        return result;
    }
};