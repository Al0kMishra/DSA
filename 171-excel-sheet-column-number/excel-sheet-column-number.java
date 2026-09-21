class Solution {
    public int titleToNumber(String ct) {
        int val = 0;
            for(int i = 0; i<ct.length(); i++){
            val += (1 + ct.charAt(i) - 'A') * (Math.pow(26,ct.length()-i-1));
            }
        return val;
    }
}