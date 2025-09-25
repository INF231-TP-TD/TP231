#include<stdio.h>
int main()
{
    int a,b,i,j,result;
    printf("Entrer la valeur de a : \n");
    printf("Entrer la valeur de b : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>0 && b>0)
    {
        result=0;
        for(i=0;i<b;i++)
        for(j=0;j<a;j++)
        {
            result=result+1;
            printf("%d*%d=%d\n",a,b,result);
        }
    }
   return 0;
}