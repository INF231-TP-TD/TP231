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

    if (0 == n%2)
    {
        printf("\tLa mediane est : %.2f.\n", (T[n/2-1] + T[n/2])/2);
    } else 
    {
        printf("\tLa mediane est : %.2f.\n", T[n/2]);
    }

    return 0;
    
}