class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        int m=n-1;
        vector<int>pairsum(m,0);
        for(int i=0;i<m;i++){
            pairsum[i]=weights[i]+weights[i+1];


        }
        sort(begin(pairsum),end(pairsum));
        long long  left=0;
        long long right=0;
        for(int i=0;i<k-1;i++){
            left+=pairsum[i];
            right+=pairsum[m-1-i];
        }
        return right-left;
    }
};