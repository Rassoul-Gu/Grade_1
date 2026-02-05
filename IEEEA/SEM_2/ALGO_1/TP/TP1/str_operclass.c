#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_S 32

int main(void) {
  char s[MAX_S + 1];
  int n = 0;
  const char *operateurs[] = { "ADD", "MUL", "END" };
  while (scanf("%32s", s) == 1) {
    n = n + 1;
    printf("%d\t%s\t", n, s);
    char *endptr;
    errno = 0;
    long int v = strtol(s, &endptr, 10);
    if (*endptr != '\0') {
      size_t i = 0;
      while (i < sizeof(operateurs) / sizeof(operateurs[0])
          && strcmp(s, operateurs[i]) != 0) {
        ++i;
      }
      if (i == sizeof(operateurs) / sizeof(operateurs[0])) {
        printf("rejected form\n");
        return EXIT_FAILURE;
      }
      printf("operator\n");
    } else {
      if (errno != 0) {
        printf("value out of range\n");
        return EXIT_FAILURE;
      }
      printf("operand = %ld\n", v);
    }
  }
  return EXIT_SUCCESS;
}
