#include <stdio.h>

int main(void) {
  int a, b, c, d, dif;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  dif = (a*b - c*d);
  
  printf("DIFERENCA = %d",dif);
  return 0;
}