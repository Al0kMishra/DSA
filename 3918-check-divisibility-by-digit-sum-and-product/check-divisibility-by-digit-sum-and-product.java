class Solution {
    public boolean checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int digit = n % 10;

            sum += digit;
            product *= digit;

            n /= 10;
        }

        if (product == 0) {
            return original % sum == 0;
        }

        return original % (sum + product)== 0; //  original % product == 0;
    }
}