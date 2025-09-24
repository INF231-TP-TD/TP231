#include <stdio.h>

#define TAILLE_MAX 500

int main () {

    int m, n;
    float M[TAILLE_MAX][TAILLE_MAX];
    float V[TAILLE_MAX];
    float W[TAILLE_MAX];

    printf("Entrer les dimentions entières suiventent (respectivement lignes-mat et colones-mat(taille-vect)).\n");

    do
    {
        scanf("%d %d", &m ,&n);
    } while (n<=0 && m<=0 && m>TAILLE_MAX && n>TAILLE_MAX);

    printf("\nRemplissage matrice.\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrice [%d][%d]:\n", i+1,j+1);
            scanf("%f",&M[i][j]);
        }
        
    }

    printf("\nRemplissage vecteur.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&V[i]);
    }
    
    
    
    for (int i = 0; i < m; i++)
    {
        W[i] = 0;
        for (int j = 0; j < n; j++)
        {
            W[i] += M[i][j]*V[j];
        }
        
    }

    printf("\nLe produit matrice-vecteur:\n");
    for (int i = 0; i < m; i++)
    {
        printf("\t%.2f\n",W[i]);
    }
}        
