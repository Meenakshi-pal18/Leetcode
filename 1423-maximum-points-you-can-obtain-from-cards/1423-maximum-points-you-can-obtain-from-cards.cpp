class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int sum = 0;

        // Sum of first k cards
        for (int i = 0; i < k; i++)
            sum += cardPoints[i];

        int ans = sum;

        // Replace left cards with right cards
        for (int i = 1; i <= k; i++) {
            sum = sum - cardPoints[k - i] + cardPoints[n - i];
            ans = max(ans, sum);
        }

        return ans;
    }
};