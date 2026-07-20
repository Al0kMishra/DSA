// class Solution {
//     public int rob(int[] nums) {
//         return solve(nums, 0, 0);
//     }

//     public int solve(int[] nums, int idx, int sum) {
//         if (idx >= nums.length) {
//             return sum;
//         }

//         int take = solve(nums, idx + 2, sum + nums[idx]);
//         int notTake = solve(nums, idx + 1, sum);

//         return Math.max(take, notTake);
//     }
// }
class Solution {

    Integer[][] dp;

    public int rob(int[] nums) {

        int total = 0;
        for (int num : nums) {
            total += num;
        }

        dp = new Integer[nums.length + 1][total + 1];

        return solve(nums, 0, 0);
    }

    public int solve(int[] nums, int idx, int sum) {

        if (idx >= nums.length) {
            return sum;
        }

        if (dp[idx][sum] != null) {
            return dp[idx][sum];
        }

        int take = solve(nums, idx + 2, sum + nums[idx]);
        int notTake = solve(nums, idx + 1, sum);

        dp[idx][sum] = Math.max(take, notTake);

        return dp[idx][sum];
    }
}