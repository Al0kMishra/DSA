class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        Arrays.sort(nums);

        List<Integer> missing = new ArrayList<>();

        for (int i = 0; i < nums.length - 1; i++) {

            int m = (nums[i + 1] - nums[i]) - 1;
            int mn = nums[i] + 1;

            while (m > 0) {
                missing.add(mn);
                mn++;
                m--;
            }
        }

        return missing;
    }
}