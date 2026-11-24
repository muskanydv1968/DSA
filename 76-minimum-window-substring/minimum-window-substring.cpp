class Solution {
public:
    string minWindow(string s, string t) {
        int windowsize=INT_MAX;
        int tlen=t.length();
        int n=s.size();
        int starti=0;
        int i=0;
        int j=0;
        unordered_map<char,int>mp;
        for(char &ch:t){
            mp[ch]++;
        }
        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){
                tlen--;
                // mp[ch]--;
            }
            mp[ch]--;
            while(tlen==0){
                int curr=j-i+1;
                if(curr<windowsize){
                    windowsize=curr;
                    starti=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    tlen++;
                }
                i++;
            }
            j++;

        }
        return windowsize==INT_MAX ? "":s.substr(starti,windowsize);
    }
};