class Solution {
    List<List<Integer>> ans = new ArrayList<>();
    public List<List<Integer>> combine(int n, int k) {
        solve(1,n,k,new ArrayList<>());
        return ans;
    }
    public void solve(int index, int n, int k, List<Integer>temp){
        if(temp.size()==k){
            ans.add(new ArrayList<>(temp));
            return;
        }
        for(int i = index; i<=n;i++){
            temp.add(i);
            solve(i+1, n, k, temp);
            temp.remove(temp.size()-1);
        }
    }
}