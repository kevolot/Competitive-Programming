public class Prob4 {
  public static void main(String[] args) {
    System.out.println(constructLargestNumberInGivenDigits(3));
    System.out.println(constructSmallestNumberInGivenDigits(3));
    System.out.println(largestPalindromeProduct(3, 3));
  }

  public static int largestPalindromeProduct(int firstNumberDigitsLength, int secondNumberDigitsLength) {
    int firstNumber = constructLargestNumberInGivenDigits(firstNumberDigitsLength);
    int secondNumber = constructLargestNumberInGivenDigits(secondNumberDigitsLength);
    int firstEndNumber = constructSmallestNumberInGivenDigits(firstNumberDigitsLength);
    int secondEndNumber = constructSmallestNumberInGivenDigits(secondNumberDigitsLength);
    int result = 0;
    for (int i = firstNumber; i > firstEndNumber; i--) {
      for (int j = secondNumber; j > secondEndNumber; j--) {
        int temp = i * j;
        if (new Library().isPalindromic(temp) && temp > result) {
          // System.out.println("The first number is: " + i);
          // System.out.println("The second number is: " + j);
          result = temp;
        }
      }
    }
    return result;
  }

  public static int constructLargestNumberInGivenDigits(int givenDigits) {
    String resultNumberInString = "9";
    while (givenDigits > 1) {
      resultNumberInString += "9";
      givenDigits--;
    }
    // System.out.println("The number is " + resultNumberInString);
    return Integer.parseInt(resultNumberInString);
  }

  public static int constructSmallestNumberInGivenDigits(int givenDigits) {
    return (constructLargestNumberInGivenDigits(givenDigits) + 1) / 10;
  }
}