class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
         for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                  st.insert({nums[i],nums[j],nums[k]});
                  j++;
                  k--;
                }
                 else if(sum<0){
                    j++;
                  }
                  else if(sum>0){
                    k--;
                  }
                
            }
         }
          vector<vector<int>>ans(st.begin(),st.end());
           return ans;
            }
    
};