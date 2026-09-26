class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=0;
        long long r=1LL*  *min_element(begin(time),end(time))*totalTrips;
        while(l<r){
            long long  trips=0;
            long long mid=l+(r-l)/2;
            for(int t:time){
                trips+=mid/t;
                if(trips>=totalTrips){
                    break;
                }
            }
                if(trips>=totalTrips){
                    r=mid;
                }else{
                    l=mid+1;
                }
            
        }
        return l;
    }
};