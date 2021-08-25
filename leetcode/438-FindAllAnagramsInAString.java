import org.junit.Test;

import java.util.*;

import static org.junit.Assert.assertEquals;

public class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int left = 0, right = 0;
        int sLen = s.length(), pLen = p.length();
        int[] hash = new int[26];
        List<Integer> result = new ArrayList<>();

        for (int i = 0; i < pLen; i++) {
            hash[p.charAt(i)-'a']++;
        }

        int count = 0;
        while (right < sLen) {
            if (hash[s.charAt(right)-'a'] > 0) {
                hash[s.charAt(right)-'a']--;
                count++;
                right++;
            } else {
                hash[s.charAt(left)-'a']++;
                count--;
                left++;
            }
            if (count == pLen) {
                result.add(left);
            }
        }
        return result;
    }

    @Test
    public void test() {
        List<Integer> testCase1 = new ArrayList<>();
        testCase1.add(0);
        testCase1.add(6);
        assertEquals(testCase1, new Solution().findAnagrams("cbaebabacd", "abc"));

        List<Integer> testCase2 = new ArrayList<>();
        testCase2.add(0);
        testCase2.add(1);
        testCase2.add(2);
        assertEquals(testCase2, new Solution().findAnagrams("abab", "ab"));
//        assertEquals(false, new Solution().findAnagrams("rat", "ratt"));
    }
}

