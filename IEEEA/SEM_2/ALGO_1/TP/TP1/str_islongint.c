#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_S 32

int main(void) {
  char s[MAX_S + 1];
  int n = 0;
  char *endptr;
  long int v;
  while (scanf("%32s", s) == 1) {
    errno = 0;
    v = strtol(s, &endptr, 10);
    n = n + 1;
    printf("%d\t%s\t", n, s);
    if (*endptr != '0') {
      printf("Illegal value\n");
    } else if (errno != 0) {
      printf("value out of range\n");
    } else {
      printf("value = %ld\n", v);
    }
  }
  return EXIT_SUCCESS;
}
