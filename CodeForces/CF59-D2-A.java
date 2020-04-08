// https://codeforces.com/contest/59/problem/A
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    java.util.Scanner in = new Scanner(System.in);
    String word = in.nextLine();

    int count = 0;

    for (int i = 0; i < word.length(); i++) {
      if ((int) word.charAt(i) < 96) {
        count++;
      } else {
        count--;
      }
    }

    if (count > 0) {
      System.out.println(word.toUpperCase());
    } else {
      System.out.println(word.toLowerCase());
    }

  }
}