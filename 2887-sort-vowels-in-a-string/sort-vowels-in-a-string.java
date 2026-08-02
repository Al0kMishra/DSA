class Solution {
    public String sortVowels(String s) {
        List<Character> vowels = new ArrayList<>();
        for (char c : s.toCharArray()) {
            if (isVowel(c)) {
                vowels.add(c);
            }
        }
        Collections.sort(vowels);

        char[] ans = s.toCharArray();
        int index = 0;

        for (int i = 0; i < ans.length; i++) {
            if (isVowel(ans[i])) {
                ans[i] = vowels.get(index++);
            }
        }

        return new String(ans);
    }
    
    boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
}