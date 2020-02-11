#include<stdio.h>
#define MAXRIGHE 10
#define MAXCOLONNE 10

int main() {
  int righe, colonne, i, j, v;
  int max, min, somma, m[MAXRIGHE][MAXCOLONNE];

/*verifica che righe sia un valore appropriato*/
do {
  printf("Quante righe vuoi inderire? (max %d) ", MAXRIGHE);
  scanf("%d", &righe);
} while (righe>MAXRIGHE || righe <= 0);

/*verifica che c sia un valore appropriato*/
do {
  printf("Quante colonne vuoi inserire? (max %d) ", MAXCOLONNE);
  scanf("%d", &colonne);
} while (colonne>MAXCOLONNE || colonne <= 0);

for(i=0; i<righe; i++)
  for(j=0; j<colonne; j++) {
    printf("Introduci il valore per m[%d][%d]: ", i,j);
    scanf("%d", &m[i][j]);
  }
  max = m[0][0]; /*il primo come max */
  min = m[0][0]; /*il primo min*/
  somma = 0;

  for(i=0; i<righe; i++)
    for(j=0; j<colonne; j++) {
      v = m[i][j];
      somma += v;
      if (v > max)
        max = v;
      else if (v < min)
        min = v;
    }

  printf("Massimo: %d\n", max);
  printf("Minimo: %d\n", min);
  printf("Somma: %d\n", somma);
  printf("Media: %f\n", (double)somma/(righe*colonne));

  return 0;
}
