class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        v.insert(v.end(),nums1.begin(),nums1.end());
        v.insert(v.end(),nums2.begin(),nums2.end());
        sort(v.begin(),v.end());
        int n=v.size();
        if(n%2==1){
            return v[n/2];
        }
        else{
            return (v[n/2]+v[n/2-1])/2.0;
        }
    }
};