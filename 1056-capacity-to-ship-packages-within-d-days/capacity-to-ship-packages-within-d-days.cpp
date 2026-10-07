class Solution {
public:
int possible(vector<int>&weights,int mid){
    int days=1,load=0;
    for(int i=0;i<weights.size();i++){
        if(weights[i]+load>mid){
            days +=1;
            load=weights[i];

        }
        else{
            load+=weights[i];
        }
    }
    return days;



}
    int shipWithinDays(vector<int>& weights, int days) {
       int l=*max_element(weights.begin(),weights.end());
       int h=accumulate(weights.begin(),weights.end(),0);
       while(l<=h){
        int mid=l+(h-l)/2;
        if(possible(weights,mid)<=days){
            h=mid-1;
        }else{
            l=mid+1;
        }
       } 
       return l;
    }
};