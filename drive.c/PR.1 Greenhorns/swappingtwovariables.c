#include<stdio.h>
void main() {
  int first, second, a;
  printf("Enter first number: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);

  a = first;
  first = second;
  second = a;

  printf("\nAfter swapping, first number = %d\n", first);
  printf("After swapping, second number = %d", second);
}