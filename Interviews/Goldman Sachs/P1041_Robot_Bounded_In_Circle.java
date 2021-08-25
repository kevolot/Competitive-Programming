import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class Solution {
    public boolean isRobotBounder(String instructions) {
        if (instructions.length() == 0) {
            return false;
        }

        int x = 0, y = 0;
        String directions = "North";

        for (char c : instructions.toCharArray()) {
            if (c == 'G') {
                if (directions == "North") {
                    y += 1;
                } else if (directions == "South") {
                    y -= 1;
                } else if (directions == "West") {
                    x -= 1;
                } else if (directions == "East") {
                    x += 1;
                }
            } else if (c == 'L') {
                if (directions == "North") {
                    directions = "West";
                } else if (directions == "South") {
                    directions = "South";
                } else if (directions == "West") {
                    directions = "East";
                } else if (directions == "East") {
                    directions = "North";
                }
            } else if (c == 'R') {
                if (directions == "North") {
                    directions = "East";
                } else if (directions == "South") {
                    directions = "West";
                } else if (directions == "West") {
                    directions = "North";
                } else if (directions == "East") {
                    directions = "South";
                }
            }
        }

        if (x == 0 && y == 0) {
            return true;
        }
        if (directions.equals("North")) {
            return false;
        }
        return true;
    }

    @Test
    public void test() {
        assertEquals(true, new Solution().isRobotBounder("GGLLGG"));
        assertEquals(false, new Solution().isRobotBounder("GG"));
        assertEquals(true, new Solution().isRobotBounder("GL"));
    }
}

