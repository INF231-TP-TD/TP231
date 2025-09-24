#include <stdio.h>


#define MAX_DIM 500



int main () {
    int n, m;
    int M1[MAX_DIM][MAX_DIM];
    int M2[MAX_DIM][MAX_DIM];

    printf("Entrer les dimentions des matrices (respectivement Lignes puis colones), entiers positifs :\n");
    do
    {
        scanf("%d %d",&n, &m);
    } while (n<=0 && m<=0 && n>MAX_DIM && m>MAX_DIM);

    printf("\nRemplissage de la première matrice (les entiers).\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Matrice 1[%d][%d]:\n", i+1, j+1);
            scanf("%d", &M1[i][j]);
        }
        
    }
    
    printf("\nRemplissage de la deuxième matrice (les entiers).\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Matrice 2[%d][%d]:\n", i+1, j+1);
            scanf("%d", &M2[i][j]);
        }
        
    }

    //Afichage de la somme 
    printf("\tLa somme des deux matrices est:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%4d", M1[i][j]+M2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}