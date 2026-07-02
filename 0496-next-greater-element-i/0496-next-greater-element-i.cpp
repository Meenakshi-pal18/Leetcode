class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int p=nums1.size();
        int q=nums2.size();
       for(int i=0;i<p;i++){
         int j=0;
         while(j<q && nums2[j]!=nums1[i]){
            j++;
         }
  int k=j+1;
  while(k<q && nums2[k]<=nums1[i]){
    k++;
  }
                    if(k<q){
                    ans.push_back(nums2[k]);
                }
                else{
                    ans.push_back(-1);
                }
        }
        return ans;
    }
};