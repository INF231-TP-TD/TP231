#include <stdio.h>

#define TAILLE_MAX 500

int main () {

    int a,b,x;
    int M[TAILLE_MAX][TAILLE_MAX];

    printf("Entrer les entiers a et b dont vous voulez le produit.\n");

    do
    {
        scanf("%d %d", &a ,&b);
    } while (a<=0 && b<=0 && a>TAILLE_MAX && b>TAILLE_MAX);

    //Remplissage 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            M[i][j] = 1;
        }
        
    }

    //calcul 
    x = 0;
    printf("Le produit de %d et %d  en addition de 1 est :.\n", a, b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            
            printf("\t%d + ",x );
            printf("%d = ",M[i][j]);
            x+=M[i][j];
            printf("%d\n",x);
        }
        
    }

    return 0;
}