#include <stdio.h>
#define MAXIMUM 100

int main() {
  int i,n, a[MAXIMUM], b[MAXIMUM], c[MAXIMUM];

  printf("Quanti numeri vuoi inserire? (max %d)", MAXIMUM);
  scanf("%d", &n);

  if(n>0 && n<=MAXIMUM) {
    for (i=0; i<n; i++) {
      printf("Introduci il %do valore di a: ", i+1);
      scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++) {
      printf("Introduci il %do valore di b: ", i+1);
      scanf("%d", &b[i]);
      c[i] = a[i] + b[i];
    }

  for(i=1; i<n; i+=2)
    printf("%d\n", c[i]);

  for(i=0; i<n; i+=2)
    printf("%d\n", c[i]);
  }
  else
    printf("Il valore inserito (%d) non e' corretto\n", n);
  return 0;
}
