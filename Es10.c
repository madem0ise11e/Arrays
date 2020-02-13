#include<stdio.h>
#include<stdlib.h>
#define R 4
#define C 5

int main() {
  int r,c,i,j,k,l;
  int mx[R][C], somma;

  printf("Introduci i valori della matrice (%d x %d):\n", R,C);
  for(i=0; i<R; i++)
    for(j=0; j<C; j++)
      scanf("%d", &mx[i][j]);

  printf("Dimensioni sottomatrice: ");
  do {
    printf("numero righe (max %d): ", R);
    scanf("%d", &r);
  } while(r > R || r <= 0);
  do {
    printf("numero colonne (max %d): ", C);
    scanf("%d", &c);
  } while (c > C || c <= 0);

  for(i=0; i<R-r+1; i++)
    for(j=0; j<C-c+1; j++) {
      somma=0;
      for(k=0; k<r; k++)
        for(l=0; l<c; l++)
          somma+=mx[i+k][j+l];
      if (somma==0) {
          for(k=0; k<r; k++) {
            for(l=0; l<c; l++)
              printf("%d", mx[i+k][j+l]);
            printf("\n");
          }
          printf("\n");
      }
    }
    return EXIT_SUCCESS;
}
