import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    
    int c = 0;
    int m[][] = new int[5][5];

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        m[i][j] = in.nextInt();
        if (m[i][j] == 1) {
          c+=Math.abs(i-2) + Math.abs(j-2);
          break;
        }
      }
    }
    System.out.println(c);
  }
}