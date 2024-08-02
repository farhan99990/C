#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);
  int original = n;

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if(original==reverse)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not Palindrome");
  }

  return 0;
}