class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
         int closest = nums[0] + nums[1] + nums[2];
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                 sum=nums[i]+nums[j]+nums[k];
                  if(abs(target - sum) < abs(target - closest)){
                    closest = sum;
                }
                if(sum>target){
                   k--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    return sum;
                }
            }
        }
        return closest;
        //return -1;
        
    }
};