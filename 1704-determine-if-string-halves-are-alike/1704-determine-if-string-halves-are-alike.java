class Solution {
    public boolean halvesAreAlike(String s) {
        s = s.toLowerCase();
        int len = s.length();
        int half = len/2;
        
        int vowel_count1 = 0;
        int vowel_count2 = 0;
        
        for(int i = 0; i<=half-1; i++){
            if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
              || s.charAt(i) == 'u'){
                vowel_count1 ++;
            }
        }
        
        for(int i = half; i<len; i++){
            if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
              || s.charAt(i) == 'u'){
                vowel_count2 ++;
            }
        }
        
        
        if(vowel_count1 == vowel_count2){
            return true;
        }
        
        return false;
    }
}