class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>mp;
        vector<vector<int>>ans;
        int n=groupSizes.size();
        for(int i=0;i<n;i++){
            int l=groupSizes[i];
            mp[l].push_back(i);
            if(mp[l].size()==l){
                ans.push_back(mp[l]);
                mp[l].clear();
            }
        }
        return ans;
    }
};