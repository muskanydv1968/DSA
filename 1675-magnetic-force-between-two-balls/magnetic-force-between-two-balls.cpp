class Solution {
public:
int wecan(vector<int> position,int mid,int m){
    int prev=position[0];
    int countball= 1;
    for(int i=1;i<position.size();i++){
        int curr=position[i];
        if(curr-prev>=mid){
            countball++;
            prev=curr;
        }
        if(countball==m){
            break;
        }

        

    }
    return countball==m;
}
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(begin(position),end(position));
        int l=1;
        int r=position[n-1]-position[0];
        int result=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(wecan(position,mid,m)){
                result=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return result;
    }
};