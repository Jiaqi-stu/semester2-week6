#include <stdlib.h>
#include <stdio.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 * 
 * @param n number to find factorial of.
 * @return int n factorial.
 */
int factorial(int n) {
  // the base case - this determines when the recursion should stop
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int C(int n, int r){
  return factorial(n)/(factorial(r)*factorial(n-r));
}

int R(int n, int r){
  return factorial(n)/factorial(n-r);
}

int main(int argc, char **argv) {
  if (argc != 4){
    printf("Usage: ./combinatorials n C r\n");
    printf("   or: ./combinatorials n P r\n");
    return 1;
  }
  
  int n = atoi(argv[1]);
  int r = atoi(argv[3]);

  if (n<0 || r<0){
    printf("n and r must be positive");
    return 1;
  }

  if (r>n){
    printf("r must less or equal to n");
  }
  
  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */
}