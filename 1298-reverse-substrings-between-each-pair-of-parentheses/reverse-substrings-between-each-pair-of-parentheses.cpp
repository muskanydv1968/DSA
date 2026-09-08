class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>lastskip;
        string result;
        for(char ch:s){
            if(ch=='('){
                lastskip.push(result.length());
            }else if(ch==')'){
                int l=lastskip.top();
                lastskip.pop();
                reverse(begin(result)+l,end(result));
            }else{
                result.push_back(ch);
            }
        }
        return result;
    }
};