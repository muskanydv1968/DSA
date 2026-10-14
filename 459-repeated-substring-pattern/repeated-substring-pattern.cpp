class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int l=n/2;l>=1;l--){
            if(n%l==0){
                int time=n/l;
                string pattern=s.substr(0,l);
                string result="";
                while(time--){
                    result+=pattern;
                }
                if(result==s){
                    return true;
                }
            
            }
        }
        return false;
    }
};