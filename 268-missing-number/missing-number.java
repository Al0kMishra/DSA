class Solution {
    public int missingNumber(int[] nums) {
        int arrsum =0;
        int n = nums.length;
        int maxsum = (n*(n+1)/2) ;
        for (int i = 0; i<n; i++){
            arrsum = arrsum + nums[i];
        }
        return maxsum-arrsum;
    }
}