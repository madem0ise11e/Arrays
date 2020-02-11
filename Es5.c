#include <stdio.h>
#define MAXIMUM 100

int main() {
  double v[MAXIMUM];
  int n,i;

  do
  {
    printf("Quanti valori introdurrai (max %d)? ", MAXIMUM);
    scanf("%d", &n);
  } while (n>MAXIMUM || n<= 2); /* continua a chiedere nuovo val */

  for (i=0; i<n; i++){
    printf("Introduci il %do valore: ", i+1);
    scanf("%lf", &v[i]);
  }

  for (i=0; i<n-2; i++)
    printf("%f ", (v[i]+v[i+1]+v[i+2])/3.0);

  return 0;
}
