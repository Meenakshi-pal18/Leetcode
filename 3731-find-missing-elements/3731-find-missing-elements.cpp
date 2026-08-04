// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         vector<int>res;
//         sort(nums.begin(),nums.end());
//        // int cnt=nums[0];
//      int cnt=1;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==cnt){
//                 cnt++;
//             }
//             else if(nums[i]<cnt){
//                 continue;
//             }
//             else{
//                 while(cnt<nums[i]){
//                 res.push_back(cnt);
//                cnt++;
//                // break;
//                 }
//                 cnt++;
//             }
//         }
//          while (cnt <= nums.size()) {
//             res.push_back(cnt);
//             cnt++;
//         }
//         return res;
//     }
// };
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> res;
        int cnt = nums[0];

        for (int i = 0; i < nums.size(); i++) {

            while (cnt < nums[i]) {
                res.push_back(cnt);
                cnt++;
            }

            if (nums[i] == cnt)
                cnt++;

            
        }

        while (cnt <= nums.size()) {
            res.push_back(cnt);
            cnt++;
        }

        return res;
    }
};