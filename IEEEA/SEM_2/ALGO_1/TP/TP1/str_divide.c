#include <stdio.h>
#include <stdlib.h>

#define MAX_S 8

int main(void) {
  char s[MAX_S + 1];
  int n = 0;
  while (scanf("%8s", s) == 1) {
    n = n + 1;
    printf("%d\t%s\n", n, s);
  }
  return EXIT_SUCCESS;
}
