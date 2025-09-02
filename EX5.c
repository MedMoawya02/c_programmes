#include <stdio.h>
#include<math.h>
int main (){
    float x,polynome;
    printf("entrez la valeur de X : ");
    scanf("%f",&x);
    polynome=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)+pow(x,2)+7*x-6;
    printf("le resultat c'est : %f",polynome);
}