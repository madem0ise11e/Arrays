#include <stdio.h>
#define MAXVALORI 100

int main() {
  int i,n,quanti, maxQuanti;
  int v[MAXVALORI], valoremax;

  do {
    printf("Quanti valori introdurrai (max %d)? ", MAXVALORI);
    scanf("%d", &n);
  } while (n>MAXVALORI || n<=0); /*continua a chiedere nuovo val*/

  printf("Introduci i valori:\n");
  for(i=0; i<n; i++)
    scanf("%d", &v[i]);

  maxQuanti = 1; /*è il primo, quindi il num di ripetiz è 1*/
  quanti = 1; /*è il primo*/
  valoremax = v[0]; /*è il primo*/
  for(i=1; i<n; i++) {
    if(v[i] == v[i-1]) { /* se è uguale al precedente*/
      quanti++;
      if (quanti>maxQuanti) {/*ricerca del max di quanti*/
        maxQuanti = quanti;
        valoremax = v[i];
      }
    }
    else
      quanti = 1;
  }
  printf("numero: %d, ripetizioni: %d\n", valoremax, maxQuanti);

  return 0;
}
