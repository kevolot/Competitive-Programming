// Runtime: 7 ms, faster than 51.11% of Java online submissions for Reverse Words in a String.
// Memory Usage: 39 MB, less than 30.64% of Java online submissions for Reverse Words in a String.

class Solution {
    public String reverseWords(String s) {
        String[] wordslist = s.trim().split("\\s+");
        if (wordslist.length == 0) {
            return "";
        } else if (wordslist.length == 1) {
            return wordslist[0];
        } else {
        StringBuffer rWords = new StringBuffer(wordslist[wordslist.length - 1]);
        for (int i = wordslist.length - 2; i >= 0; i--) {
            rWords.append(" ");
            rWords.append(wordslist[i]);
        }
            return rWords.toString();
        }
        
    }
}