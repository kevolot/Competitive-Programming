class Solution {
    public int trap(int[] height) {
        int left = 0, right = height.length - 1;
        int left_max = height[left], right_max = height[right];
        int res = 0;
        
        while(left < right) {
            if (height[left] < height[right]) {
                if (left_max > height[left]) {
                    res += left_max - height[left];
                } else {
                    left_max = height[left];
                }
                left++;
            } else {
                if (right_max > height[right]) {
                    res += right_max - height[right];
                } else {
                    right_max = height[right];
                }
                right--;
            }
        }
        return res;
    }
}
