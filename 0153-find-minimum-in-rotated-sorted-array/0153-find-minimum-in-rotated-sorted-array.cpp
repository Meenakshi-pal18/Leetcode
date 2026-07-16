class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int min=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return min;
    }
};