#include <stdio.h>

#define TAILLE_MAX 500

int main () {
    int n, v;
    float x;
    float T[TAILLE_MAX];

    printf("Entrer le nombre d'élément de votre tableau:\n");
    do
    {
        scanf("%d", &n);
    } while (n<=0 && n>TAILLE_MAX);

    printf("Entrer les éléments du tableau:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&T[i]);
    }
    
    v=0;
    printf("Entrer la valeur recherchée:\n");
    scanf("%f", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == T[i])
        {
            printf("La valeur %.2f a été retouvé dans le tableau.\n", T[i]);
            v = 1;
        }
        
    }
    if (!v)
    {
        printf("Valeur non retrouvée.\n");
    }
    
    
    return 0;
}