#include <stdio.h>
#define MAXIMUM 100
int main() {
  int i, n, v[MAXIMUM];
  int max, min, somma;

  do {
  printf("Quanti valori vuoi inserire? (max %d) ", MAXIMUM);
  scanf("%d", &n);
  } while (n > MAXIMUM || n <= 0 );

  for(i=0; i<=n; i++){
    printf("Inserisci il %do valore: ", i+1);
    scanf("%d", &v[i]);
  }

  min = v[0];
  max = v[0];
  somma = v[0];

  for(i=1; i<n; i++){
    somma += v[i];
  if (v[i] > max)
    max = v[i];
  else if (v[i] < min)
    min = v[i];
  }

  printf("Maximum = %d\n", max);
  printf("Minimum = %d\n", min);
  printf("Somma = %d\n", somma);
  printf("Media = %f\n", (double)somma/n);

  return 0;

}
