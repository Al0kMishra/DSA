class Solution {
    public int searchInsert(int[] nums, int target) {
        int idx =0;
        for (int i = 0; i<nums.length; i++){
            if(nums[i]>=target){
                idx = i;
                break; 
            }
            else{
                if(nums[nums.length -1]<target){
                    return nums.length;
                }
            }
        }
        return idx;
    }
}