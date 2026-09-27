class Solution {
public:
double possible(vector<int>&dist,int mid){
    int n=dist.size();
    double time=0.0;
    for(int i=0;i<n-1;i++){
        double t=(double)dist[i]/(double)mid;
        time+=ceil(t);
        
    }
    time+=(double)dist[n-1]/(double)mid;
    return time;
}
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=1;
        int r=1e7;
        // int minspeed=-1;
        int result=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(dist,mid)<=hour){
                result=mid;
                r=mid-1;

            }else{
                l=mid+1;
            }
        }
        return result;

    }
};