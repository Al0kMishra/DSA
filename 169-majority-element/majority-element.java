// class Solution {
//     public int majorityElement(int[] nums) {
//     int count = 0, candidate = 0;
//     for (int num : nums) {
//         if (count == 0) {
//             candidate = num;
//         }
//         count += (num == candidate) ? 1 : -1;
//     }
//     return candidate;
//    }
// }
class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i : nums){
            map.put(i,map.getOrDefault(i,0)+1);
            if(map.get(i)> nums.length/2){
            return i;
            }
        }


        return -1;

   }
   

}