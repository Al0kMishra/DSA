// class Solution {
//     public int maxProduct(int n) {
//         ArrayList<Integer> arr = new ArrayList<>();

//         while (n > 0) {
//             arr.add(n % 10);
//             n /= 10;
//         }

//         Collections.sort(arr);

//         int size = arr.size();
//         return arr.get(size - 1) * arr.get(size - 2);
//     }
// }
 class Solution {
     public int maxProduct(int n) {
        int max1 = 0;
        int max2 = 0;
        while(n>0){
            int digit = n%10;
            if(digit>=max1){
                max2=max1;
                max1=digit;
            }
            else if(digit>max2){
                max2=digit;
            }
            n/=10;
        }
        return max1*max2;
     }
}