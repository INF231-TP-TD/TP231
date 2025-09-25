#include<stdio.h>
#include<stdlib.h>

void trier_tableau(int tab[] , int taille ) {
int i , j , temps ;
   for (i=0 ; i<= taille-1 ; i++ ) {
        for (j= i+1 ; j<taille ; j++ ) {
             if (tab[i] > tab[j]) {
             temps = tab[i] ;
             tab[i] = tab[j] ;
             tab[j] = temps ;
            }
        }
    }
 }
 
 // fonction calculer_median
 double calculer_median( int tab[] , int taille ) {
       if(taille % 2 == 0 ){
       return (tab[(taille / 2)-1] + tab[taille / 2]) / 2.0 ;
       } else {
            return tab[taille / 2 ] ;
       }
 }
  
  int main() {
    int taille ;
    printf("entrer la taille du tableau:") ;
    scanf("%d" , &taille ) ;
    
    int tab[taille] ;
    int i ;
    printf("entrer les elements du tableau:") ;
    for (i=0 ; i<taille ; i++ ) {
         scanf("%d" , &tab[i]) ;
 }
 
trier_tableau(tab, taille ) ;	

float median = calculer_median(tab, taille ) ;
printf("le median est : %2f\n " , median ) ;

return 0;

} 

      

