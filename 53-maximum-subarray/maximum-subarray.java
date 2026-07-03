class Solution {
    public int maxSubArray(int[] nums) {
        int fb = 0;
        int mw = Integer.MIN_VALUE;
        for(int i = 0; i<nums.length; i++){
            fb = Math.max(nums[i], fb+nums[i]);
            mw = Math.max(fb,mw);
        }
        return mw;

        
    }
}