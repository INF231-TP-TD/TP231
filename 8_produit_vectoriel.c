#include <stdio.h>

int main() {
  int v1[3], v2[3], result[3];

  printf("Entrer les composantes du vecteur v1(x y z) :\n ");
 printf("V1= ");
  scanf("%d %d %d", &v1[0], &v1[1], &v1[2]);

  printf("Entrer les composantes du vecteur v2(x y z):\n ");
  printf("V2 = ");
  scanf("%d %d %d", &v2[0], &v2[1], &v2[2]);

  result[0] = v1[1] * v2[2] - v1[2] * v2[1];
  result[1] = v1[2] * v2[0] - v1[0] * v2[2];
  result[2] = v1[0] * v2[1] - v1[1] * v2[0];

  printf("Résultat du produit vectoriel : (%d, %d, %d)\n", result[0], result[1], result[2]);

  return 0;
}
