class Solution {
public:
int possible(int mid,vector<int>&quantities,int shops){
    for(int &product:quantities){
        shops-=(product+mid-1)/mid;

    if(shops<0){
        return false;
    }
    }
    return true;
}
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m=quantities.size();
        int l=1;
        int r=*max_element(begin(quantities),end(quantities));
        int result=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(mid,quantities,n)){
                result=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return result;

    }
};