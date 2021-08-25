import org.junit.Test;

import java.util.*;

import static org.junit.Assert.assertEquals;

public class Solution {
    public boolean isAnagram(String s, String t) {

        char[] sArray = new char[26];
        for (int i = 0; i < s.length(); i++) {
            sArray[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            sArray[t.charAt(i) - 'a']--;
        }
        for (char c : sArray) {
            if (c != 0) {
                return false;
            }
        }
        return true;
    }

    @Test
    public void test() {
        assertEquals(true, new Solution().isAnagram("anagram", "nagaram"));
        assertEquals(false, new Solution().isAnagram("rat", "car"));
        assertEquals(false, new Solution().isAnagram("rat", "ratt"));
    }
}

