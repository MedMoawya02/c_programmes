#include <stdio.h>
#include<math.h>
int main (){
    int x,polynome;
    printf("entrez la valeur de X : ");
    scanf("%d",&x);
    polynome=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)+pow(x,2)+7*x-6;
    printf("le resultat c'est : %d",polynome);
}