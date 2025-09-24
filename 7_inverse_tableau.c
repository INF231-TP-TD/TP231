#include <stdio.h>

#define TAILLE_MAX 500

int main () {
    int n;
    float x;
    float T[TAILLE_MAX];

    printf("Entrer la taille du tableau(un entier positif).\n");
    do
    {
        scanf("%d", &n);
    } while (n<=0 &&n>TAILLE_MAX);

    printf("Entrer les valeurs du tableau:\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%f", &T[i]);
    }
    
    for (int i = 0; i < n/2; i++)
    {
        x = T[i];
        T[i] = T[n-1-i];
        T[n-1-i] = x;
        
    }
    
    printf("Le tableau inversé ets:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t", T[i]);
    }
    printf("\n");
    
    return 0;
}