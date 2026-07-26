class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int l=0;
        int maxfreq=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'A']++;
            maxfreq=max(maxfreq,freq[s[i]-'A']);
            while((i-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};