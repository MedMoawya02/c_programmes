#include <stdio.h>
#include <math.h>
int main(void)
{
    float v,r;
    const float Pi=3.14;
    printf("entrer la valeur du rayon :");
    scanf("%f",&r);
    v=4.0/3.0*Pi*r*r*r;
    printf("levolume de sphere = %f",v);
return 0;
}