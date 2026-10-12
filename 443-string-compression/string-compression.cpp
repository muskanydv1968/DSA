class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idex=0;
        int i=0;
        while(i<n){
            char current=chars[i];
            int cnt=0;
            while(i<n && chars[i]==current){
                cnt++;
                i++;
            }
            chars[idex]=current;
            idex++;
            if(cnt>1){
            string newcurrent=to_string(cnt);
            for(int ch:newcurrent){
                chars[idex]=ch;
                idex++;

            }
        }
        }
        return idex;
    }
};