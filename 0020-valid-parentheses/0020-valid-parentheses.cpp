class Solution {
public:
    bool isValid(string s) {
        stack<int>str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                str.push(s[i]);
            }
            else{
                if(str.size()==0){
                    return false;
                }
                if(str.top()=='(' && s[i]==')' || str.top()=='{' && s[i]=='}' ||
                str.top()=='[' && s[i]==']'){
                    str.pop();
                }
                else{
                    return false;
                }
            }
        }
        return str.size()==0;
    }
};