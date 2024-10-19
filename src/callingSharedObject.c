#include <stdio.h>
#include <stdlib.h>
#include <mylib.h>

int main(void)
{
  int x, y, z;
  puts("Enter the first number to add:");
  scanf("%d", &x);
  puts("Enter the second number to add:");
  scanf("%d", &y);
  z = add(x, y);
  printf("%d + %d = %d\n", x, y, z);
  return EXIT_SUCCESS;
}

