#include <stdio.h>



int main () {
    float V1[3];
    float V2[3];

    printf("☢️ \tLe produit vectoriel ne se fait qu'en dimension 3!\n ");

    printf("\nEntrer les coordonnées du premier vecteur:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &V1[i]);
    }

    printf("\nEntrer les coordonnées du deuxième vecteur:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &V2[i]);
    }
    
    printf("\nLe produit vectoriel est :\n");
    printf("\t %.2f\n", (V1[1]*V2[2])-(V1[2]*V2[1]));
    printf("\t %.2f\n", (V1[2]*V2[0])-(V1[0]*V2[2]));
    printf("\t %.2f\n", (V1[0]*V2[1])-(V1[1]*V2[0]));
    
    return 0;
}
