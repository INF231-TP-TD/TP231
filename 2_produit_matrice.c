#include <stdio.h>

#define MAX_DIM 500


int main(){

    int m, n, p;
    int M1[MAX_DIM][MAX_DIM];
    int M2[MAX_DIM][MAX_DIM];
    int M3[MAX_DIM][MAX_DIM];

    printf("Entrer les dimentions des matrices (respectivement Lignes matrice 1, colones matrice 1(lignes matrice 2) et colones matrice 2), entiers positifs :\n");
    do
    {
        scanf("%d %d %d",&m, &n, &p);
    } while (n<=0 && m<=0 && p<=0 || n>MAX_DIM || m>MAX_DIM || p>MAX_DIM);

    printf("\nRemplissage de la première matrice (les entiers).\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrice 1[%d][%d]:\n", i+1, j+1);
            scanf("%d", &M1[i][j]);
        }
        
    }

    printf("\nRemplissage de la deuxième matrice (les entiers).\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Matrice 2[%d][%d]:\n", i+1, j+1);
            scanf("%d", &M2[i][j]);
        }
        
    }

    //calcul du produit
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            M3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                M3[i][j] += M1[i][k]*M2[k][j];
            }
            
        }
    }
    
    //Afichage du produit
    printf("\tLe produit des deux matrices est:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%4d", M3[i][j]);
        }
        printf("\n");
    }
    

    return 0;
} 