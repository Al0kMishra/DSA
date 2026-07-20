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
import java.util.Arrays;

class Solution {

    public int rob(int[] nums) {
        int[] dp = new int[nums.length];
        Arrays.fill(dp, -1);

        return solve(nums, 0, dp);
    }

    public int solve(int[] nums, int idx, int[] dp) {

        if (idx >= nums.length) {
            return 0;
        }

        if (dp[idx] != -1) {
            return dp[idx];
        }

        int take = nums[idx] + solve(nums, idx + 2, dp);
        int notTake = solve(nums, idx + 1, dp);

        dp[idx] = Math.max(take, notTake);

        return dp[idx];
    }
}