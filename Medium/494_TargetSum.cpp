class Solution {
public:
    int solve(vector<int>& nums, int i, int target,
              vector<vector<int>>& dp, int offset) {

        if (abs(target) > offset)
            return 0;

        if (i == nums.size())
            return target == 0;

        if (dp[i][target + offset] != -1)
            return dp[i][target + offset];

        int add = solve(nums, i + 1, target - nums[i], dp, offset);
        int sub = solve(nums, i + 1, target + nums[i], dp, offset);

        return dp[i][target + offset] = add + sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;

        for (int x : nums)
            sum += x;

        if (abs(target) > sum)
            return 0;

        vector<vector<int>> dp(
            nums.size(),
            vector<int>(2 * sum + 1, -1)
        );

        return solve(nums, 0, target, dp, sum);
    }
};