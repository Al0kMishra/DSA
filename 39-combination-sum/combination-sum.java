class Solution {

    List<List<Integer>> ans = new ArrayList<>();

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        solve(candidates, target, 0, new ArrayList<>());
        return ans;
    }

    public void solve(int[] arr, int target, int index, List<Integer> temp) {

        if (target == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }

        if (index == arr.length || target < 0)
            return;

        temp.add(arr[index]);
        solve(arr, target - arr[index], index, temp);
        temp.remove(temp.size() - 1);

        solve(arr, target, index + 1, temp);
    }
}