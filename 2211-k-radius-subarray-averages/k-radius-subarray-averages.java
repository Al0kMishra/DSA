class Solution {
    public int[] getAverages(int[] nums, int k) {

        long sum = 0;
        int[] ans = new int[nums.length];
        Arrays.fill(ans, -1);

        if (2 * k + 1 > nums.length)
            return ans;

        for (int i = 0; i < 2 * k + 1; i++) {
            sum += nums[i];
        }

        ans[k] = (int)(sum / (2 * k + 1));

        for (int i = 2 * k + 1; i < nums.length; i++) {
            sum += nums[i] - nums[i - (2 * k + 1)];
            ans[i - k] = (int)(sum / (2 * k + 1));
        }

        return ans;
    }
}