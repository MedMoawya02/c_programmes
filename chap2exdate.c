#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int j1,m1,a1;
    int j2,m2,a2;
    do{
    printf("entrez la premiere annee (jj//mm//aa) : ");
    scanf("%d %d %d",&j1,&m1,&a1);
    printf("entrez la deuxieme annee (jj//mm//aa) : ");
    scanf("%d %d %d",&j2,&m2,&a2);
    if (j1 > 31 || j1 < 1 || m1 > 12 || m1 < 1 ||j2 > 31 || j2 < 1 || m2 > 12 || m2 < 1) {
            printf(" Une ou plusieurs dates sont invalides. Veuillez réessayer.\n\n");
        }

    }while((j1>31||j2>31)||(m1>12||m2>12));
    if(a1<a2)
        printf("%d//%d//%d plus tot que %d//%d//%d ",j1,m1,a1,j2,m2,a2);
    else if(a1>a2)
        printf("%d//%d//%d plus tot que %d//%d//%d ",j2,m2,a2,j1,m1,a1);
    else{
        if(m1<m2)
            printf("%d//%d//%d plus tot que %d//%d//%d ",j1,m1,a1,j2,m2,a2);
        else if(m1>m2)
            printf("%d//%d//%d plus tot que %d//%d//%d ",j2,m2,a2,j1,m1,a1);
        else{
             if(j1<j2)
                printf("%d//%d//%d plus tot que %d//%d//%d ",j1,m1,a1,j2,m2,a2);
            else if(j1>j2)
                printf("%d//%d//%d plus tot que %d//%d//%d ",j2,m2,a2,j1,m1,a1);
        }
    }

    return 0;
}
