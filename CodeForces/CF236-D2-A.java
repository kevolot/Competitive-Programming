import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

// https://codeforces.com/contest/236/problem/A

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String userName = in.nextLine();

    Set<Character> dictionary = new HashSet<>();

    for (int i = 0; i < userName.length(); i++) {
      dictionary.add(userName.charAt(i));
    }

    if (dictionary.size() % 2 == 0 ) {
      System.out.println("CHAT WITH HER!");
    } else {
      System.out.println("IGNORE HIM!");
    }

    in.close();
  }
}