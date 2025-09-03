#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,n2,nbr_inverse;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    if(n<1&&n>99)
        printf("error:veuillez saisir un nombre dedeux chiffres.");
    else{
        n1=n%10;
        n2=n/10;
        nbr_inverse=n1*10+n2;
        printf("l'inverse =%d",nbr_inverse);
    }

    return 0;
}