class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        boolean check = false;
        int count = 0;
        for(int i = s.length()-1; i>=0; i--){
            if(Character.isLetter(s.charAt(i))){
                count++;
                check = true;
            }else{
                if(check = true){
                    return count;
                }
            }
        }

        return count;
    }
}