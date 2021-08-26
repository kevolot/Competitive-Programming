import org.junit.Test;

import java.util.*;

import static org.junit.Assert.assertEquals;

public class Solution {
    public int minPathSum(int[][] grid) {
        int height = grid.length;
        int width = grid[0].length;

        for (int row = 0; row < height; row++) {
            for (int col = 0; col < width; col++) {
                if (row == 0 && col == 0) {
                    grid[row][col] = grid[row][col];
                } else if (row == 0 && col != 0) {
                    grid[row][col] = grid[row][col] + grid[row][col-1];
                } else if (col == 0 && row != 0) {
                    grid[row][col] = grid[row][col] + grid[row-1][col];
                } else {
                    grid[row][col] = grid[row][col] + Math.min(grid[row-1][col],grid[row][col-1]);
                }
            }
        }
        return grid[height-1][width-1];
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

