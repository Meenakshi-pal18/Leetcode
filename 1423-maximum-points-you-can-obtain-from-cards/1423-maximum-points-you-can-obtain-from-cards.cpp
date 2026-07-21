class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int sum = 0;

        // Take first k cards
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int ans = sum;

        int left = k - 1;
        int right = n - 1;

        while (left >= 0) {
            sum -= cardPoints[left];   // Remove from left
            sum += cardPoints[right];  // Add from right

            ans = max(ans, sum);

            left--;
            right--;
        }

        return ans;
    }
};