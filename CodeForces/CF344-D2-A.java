import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

// https://codeforces.com/contest/344/problem/A

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(in.readLine());

        String[] magnets = new String[num];

        int shift = 1;
        for (int i = 0; i < num; i++) {
          magnets[i] = in.readLine();
          if (i > 0 && magnets[i].charAt(0) == magnets[i-1].charAt(1))
            shift++;
        }
        System.out.println(shift);
    }
}
