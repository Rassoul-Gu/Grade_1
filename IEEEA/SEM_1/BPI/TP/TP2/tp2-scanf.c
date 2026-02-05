#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n1, n2;
  int rep = scanf("%d%d", &n1, &n2);
  rep = printf("\n%d\n", rep);
  printf("%d\n", rep);
  rep = scanf("%*s");
  printf("%d\n", rep);
  return EXIT_SUCCESS;
}
