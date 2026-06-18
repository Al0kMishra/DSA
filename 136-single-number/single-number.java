 class Solution {
     public int singleNumber(int[] nums) {
//         int n = nums.length;

//         for (int i = 0; i < n; i++) {
//             int count = 0;

//             for (int j = 0; j < n; j++) {
//                 if (nums[i] == nums[j]) {
//                     count++;
//                 }
//             }

//             if (count == 1) {
//                 return nums[i];
//             }
//         }

//         return -1;
//     }
// }
            int n = nums.length;
            HashMap < Integer, Integer > map = new HashMap<>();
            for(int i = 0; i < n; i++) {
                if(map.containsKey(nums[i])){
                    map.put(nums[i],map.get(nums[i])+1);
                }
                else{
                    map.put(nums[i],1);
                }
            }
            for(int i = 0; i<n; i++){
                if(map.get(nums[i])==1)
                return nums[i];
            }
            return -1;
     }
 }
        