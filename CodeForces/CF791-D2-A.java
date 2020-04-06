import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    int a,b;
    a = in.nextInt();
    b = in.nextInt();

    int c = 0;
    while (a<=b) {
      c++;
      a*=3;
      b*=2;
    }
    System.out.println(c);
  }
}