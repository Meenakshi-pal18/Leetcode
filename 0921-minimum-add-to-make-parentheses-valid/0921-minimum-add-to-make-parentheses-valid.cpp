class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>ans;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(!ans.empty() && (ans.top()=='(' && s[i]==')')){
                ans.pop();
                cnt--;
            }
            else{
                ans.push(s[i]);
                cnt++;
            }
        }
        return cnt;
    }
};