#include <stdio.h>

#define TAILLE_MAX 500

int main() {

    int n;
    float x;
    float T[TAILLE_MAX];

    printf("Entrer le bnombre d'élémetns du tableau (un entier).\n");
    do
    {
        scanf("%d", &n);
    } while (n<=0 && n>TAILLE_MAX);

    printf("Entrer les éléments du tableaux:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &T[i]);
    }
    
    //Trie
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {  
            if (T[j+1] < T[j])
            {
                x = T[j];
                T[j] = T[j+1];
                T[j+1] = x;
            }
            
        }
    }
   
    printf("Le tableau après trie est:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t", T[i]);
    }
    printf("\n");
    
    return 0;
}