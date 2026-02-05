#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char msg[100] = "Bonjour";
  strcat(msg, " tout le monde");

  size_t n = strlen(msg);
  printf("Message de longueur %zu : %s\n", n, msg);

  return EXIT_SUCCESS;
}
