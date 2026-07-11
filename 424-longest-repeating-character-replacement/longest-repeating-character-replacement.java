class Solution {
    public int characterReplacement(String s, int k) {

        // HashMap<Character, Integer> map = new HashMap<>();

        // int left = 0;
        // int maxFreq = 0;
        // int max = 0;

        // for (int right = 0; right < s.length(); right++) {

        //     char ch = s.charAt(right);

        //     map.put(ch, map.getOrDefault(ch, 0) + 1);

        //     maxFreq = Math.max(maxFreq, map.get(ch));

        //     while ((right - left + 1) - maxFreq > k) {

        //         char leftChar = s.charAt(left);

        //         map.put(leftChar, map.get(leftChar) - 1);

        //         left++;
        //     }

        //     max = Math.max(max, right - left + 1);
        // }

        // return max

        HashMap < Character, Integer> map = new HashMap<>();

        int left = 0;
        int maxlen = 0;;
        int maxfreq = 0;

        for(int right = 0; right < s.length(); right++){
            char ch = s.charAt(right);

            map.put(ch, map.getOrDefault(ch,0) + 1);
            maxfreq = Math.max(maxfreq,map.get(ch));

            while((right - left + 1) - maxfreq > k){
                map.put(s.charAt(left), map.get(s.charAt(left)) - 1);
                left++;
            }
            maxlen = Math.max(maxlen , right - left + 1);
        }
        return maxlen;
    }
}