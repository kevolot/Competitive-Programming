public class Prob2 {
  public static void main(String[] args) {
    long result = evenFibonacciNumbers(4000000);
      System.out.println(result);
  }

    public static long evenFibonacciNumbers(long threshold) {
      long sum = 0;
      long firstNumber = 1;
      long secondNumber = 2;
      while (secondNumber <= threshold) {
          long temp = 0;
          if (secondNumber % 2 == 0) {
            sum += secondNumber;
          }
          temp = firstNumber + secondNumber;
          firstNumber = secondNumber;
          secondNumber = temp;
      }

      return sum;
  }
}