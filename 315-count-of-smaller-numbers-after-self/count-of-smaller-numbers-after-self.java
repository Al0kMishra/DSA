class Solution {
    public List<Integer> countSmaller(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        List<Integer> sorted = new ArrayList<>();

        for (int i = nums.length - 1; i >= 0; i--) {
            int index = binarySearch(sorted, nums[i]);
            ans.add(index);
            sorted.add(index, nums[i]);
        }

        Collections.reverse(ans);
        return ans;
    }

    int binarySearch(List<Integer> sorted, int target) {
        int left = 0;
        int right = sorted.size();

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (sorted.get(mid) < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
}