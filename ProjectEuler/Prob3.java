public class Prob3 {
  public static void main(String[] args) {
    long result = largestPrimeFactor(600851475143L);
    System.out.println(result);
  }

  public static long largestPrimeFactor(long number) {
    long result = 0;
    if (number % 2L == 0) {
      System.out.println("The number " + number + " is even");
      for (long i = number / 2L; i > 2L; i--) {
        if (number % i == 0) {
          if (new Library().isPrime(i)) {
            result = i;
            break;
          }
        }
      }
    } else {
      System.out.println("The number " + number + " is odd");
      for (long i = number / 2L - 1L; i > 2L; i--) {
        // System.out.println(i);
        if (number % i == 0) {
          if (new Library().isPrime(i)) {
            result = i;
            break;
          }
        }
      }
    }

    return result;
  }
}