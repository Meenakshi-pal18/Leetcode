class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans;

        int left = 0;
        int right = nums.size() - 1;

        int first = -1;
        int last = -1;
        while(left <= right) {

            int mid = (left + right) / 2;

            if(nums[mid] == target) {
                first = mid;
                right = mid - 1;
            }

            else if(nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        left = 0;
        right = nums.size() - 1;

        while(left <= right) {

            int mid = (left + right) / 2;

            if(nums[mid] == target) {
                last = mid;
                left = mid + 1;
            }

            else if(nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};