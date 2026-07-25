class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char>st;
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.length();i++){
          
            while(find(st.begin(),st.end(),s[i])!=st.end()){
                st.erase(st.begin());
                cnt--;
            }
            st.push_back(s[i]);
        cnt++;
        ans=max(ans,cnt);
        }
        return ans;
    }
};