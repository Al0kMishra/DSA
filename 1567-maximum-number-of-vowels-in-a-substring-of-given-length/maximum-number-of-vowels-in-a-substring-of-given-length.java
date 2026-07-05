class Solution {
    public int maxVowels(String s, int k) {
        int count = 0;
        for(int i = 0; i<k; i++){
            if("aeiou".indexOf(s.charAt(i))!= -1){
                count ++;
            }
        }
        int maxcount = count;
        for(int i = k; i<s.length(); i++){
            if("aeiou".indexOf(s.charAt(i))!= -1){
                count ++;
            }
            if("aeiou".indexOf(s.charAt(i-k))!= -1){
                count--;
            }
            maxcount = Math.max(maxcount,count);
        }

        return maxcount;
        
    }
}