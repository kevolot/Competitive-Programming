class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int max = 0;
        for (int i : nums) {
            count = i == 0 ? 0 : count + 1;
            max = Math.max(max, count);
        }
        return max;
    }
}