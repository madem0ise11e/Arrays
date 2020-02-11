#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXR 20
#define MAXC 26
#define MAXCS 99

int main() {
  int righe, colonne, mx[MAXR][MAXC], i, j, numpari = 0;
  double unquarto;
  srand(time(NULL));

do {
  printf("Quante righe vuoi inserire? (max %d) ", MAXR);
  scanf("%d", &righe);
} while (righe > MAXR || righe <= 0);

do {
  printf("Quante colonne vuoi inserire? (max %d) ", MAXC);
  scanf("%d", &colonne);
} while (colonne > MAXC || colonne <= 0);

unquarto = righe*colonne/4.0; /* 4.0 e' double per avere un risultato frazionario*/

/*riempie matrice mx di valori casuali*/
for (i=0; i<righe; i++)
  for (j=0; j<colonne; j++)
    mx[i][j] = rand() % (MAXCS + 1);

/*visualizza mx e intanto conta i pari*/
for(i=0; i<righe; i++)
  for(j=0; j<colonne; j++)
    if (mx[i][j] % 2 == 0) /*conta i pari*/
    {
      numpari++;
      if (numpari >= unquarto)
        goto fuori;
    }

     fuori:
     if (numpari>unquarto)
      printf("Almeno un quarto dei valori e' pari\n");
    else
      printf("Meno di un quarto dei valori e' pari\n");



  return 0;
}
