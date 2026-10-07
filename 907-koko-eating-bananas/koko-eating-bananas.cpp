class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int ho=*max_element(piles.begin(),piles.end());
        while(l<=ho){
            int mid=l+(ho-l)/2;
            long long hour=0;
            for(int pile:piles){
                hour+=(pile+mid-1)/mid;
            }
            if(hour<=h){
                ho=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};