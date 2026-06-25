// class Solution {
//     public int searchInsert(int[] nums, int target) {
//         int idx =0;
//         for (int i = 0; i<nums.length; i++){
//             if(nums[i]>=target){
//                 idx = i;
//                 break; 
//             }
//             else{
//                 if(nums[nums.length -1]<target){
//                     return nums.length;
//                 }
//             }
//         }
//         return idx;
//     }
// }
class Solution {
     public int searchInsert(int[] nums, int target) {
        int l = 0;
        int h = nums.length - 1;
        
        while(l<=h){
            int mid = (l + h)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
               l= mid+1;
            }
            else{
               h = mid-1;

            }
        }
        return l;
    }
}