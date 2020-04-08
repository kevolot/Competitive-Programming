import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    
    int arraylength = in.nextInt();

    int[] boxes = new int[arraylength];

    for (int i = 0; i < arraylength; i++) {
      boxes[i] = in.nextInt();
    }

    Arrays.sort(boxes);
    for (int i : boxes) {
      System.out.print(i);
      System.out.print(' ');
    }
    
  }
}