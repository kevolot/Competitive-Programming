public class Library {

  public Library() {
  }

  public boolean isPrime(long number) {
    boolean flag = false;
    for (int i = 2; i <= number / 2; ++i) {
      // condition for nonprime number
      if (number % i == 0) {
        flag = true;
        break;
      }
    }
    return !flag;
  }

  public boolean isPalindromic(int number) {
    String num = String.valueOf(number);
    // System.out.println("The number is " + num);
    if (num.equals(new StringBuffer(num).reverse().toString())) {
      return true;
    } else {
      return false;
    }
  }
}