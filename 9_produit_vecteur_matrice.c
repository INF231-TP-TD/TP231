#include <stdio.h>


int main() {
	
	
	int choix;
	printf("---PRODUIT DE VECTEUR ET MATRICE ---\n ");
	printf("1. VECTEUR(n) X MATRICE (n x m):\n");
	printf("2. MATRICE(n x m) X VECTEUR(n):\n");
	printf(" bien vouloir faire un choix :\n");
	scanf("%d",&choix);
	
	
	if (choix == 1){
	
	int n ,m;
	printf("entrer le nombre de ligne n du vecteur \n");
scanf("%d",&n);


printf("entrer le nombre de colone m  de la matrice:\n");
scanf("%d",&m);



int v[n]  ;
int M[n][m];
int i ,j;
int u[m];

for(j = 0 ; j < m ; j++)
u[j]= 0;



printf("entrer les %d element du vecteur :\n", n);
for(i = 0 ; i<n ; i++){
scanf("%d",&v[i]);

}
	printf("enter les element de la matrise (%d * %d):\n",n ,m);
	
	for(j = 0 ; j < m ; j++){
	 for(i = 0 ; i < n ; i++){
	 	scanf("%d",&M[i][j]);
	 	
	}
		}
		
//	calcule du resultat	


for(j = 0 ; j < m ; j++){
	for(i = 0 ; i < n ; i++){
		
		u[j] += v[i] * M[i][j];
		
	}
}	
	
printf("le resultat (vecteur ligne 1*%d): \n",m);

 for(j = 0 ; j < m ; j++){
	printf("%d\n",u[j]);
}	
	
	
	printf("\n");
	
	
} else if (choix == 2){
	
int n , m ;
	
	
	printf("entrer le nombre de ligne n du vecteur \n");
scanf("%d",&n);

printf("entrer le nombre de ligne n de la matrice:\n");
scanf("%d",&n);

printf("entrer le nombre de colone m  de la matrice:\n");
scanf("%d",&m);



int v[n];
int M[n][m];
int i ,j;
int u[m];

for(i = 0 ; i < m ; i++)
u[i]= 0;



printf("entrer les %d element du vecteur :\n");
for(i = 0 ; i<n ; i++){
scanf("%d",&v[i]);

}
	printf("enter les element de la matrise (%d * %d):\n",m ,n);
	
	for(i = 0 ; i < m ; i++){
	 for(j = 0 ; j < n ; j++){
	 	scanf("%d",&M[i][j]);
	 	
	}
		}
		
//	calcule du resultat	


for(i = 0 ; i < m ; i++){
	for(j = 0 ; j < n ; j++){
		
		u[i] += M[i][j] * v[j];
		
	}
}	
	
printf("le resultat (vecteur colone %d * 1) \n",m);

 for(i = 0 ; i < m ; i++){
	printf("%d\n",u[i]);
}	
	
	
	printf("\n");
	
	
	}else{
		
		printf("choix non valide : \n");
	
	}
	
	
	return 0;
}

