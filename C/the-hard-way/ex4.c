#include <stdio.h>

/* Warning: file is bad on purpose. Valgrind exersize, you see. */

int main() {
  int age = 10;
  int height;

  printf("I am %d years old.\n");
  printf("I am %d inches tall.\n", height);

  return 0;
}
