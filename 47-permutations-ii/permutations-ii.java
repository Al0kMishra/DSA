class Solution {
    List<List<Integer>>ans = new ArrayList<>();
    public List<List<Integer>> permuteUnique(int[] nums) {
        Arrays.sort(nums);
        boolean[] visited = new boolean[nums.length];
        solve(nums,visited,new ArrayList<>());
        return ans;
    }
    public void solve(int[]nums,boolean[]visited,List<Integer>temp){
        if(temp.size()==nums.length){
            ans.add(new ArrayList<>(temp));
            return;
        }
        for(int i = 0; i<nums.length; i++){
            if(i>0 && nums[i]==nums[i-1]&& !visited[i-1]){
                continue;
            }
            if(!visited[i]){
                visited[i]= true;
                temp.add(nums[i]);
                solve(nums,visited,temp);
                temp.remove(temp.size()-1);
                visited[i]=false;
                
            }
        }

    }
}