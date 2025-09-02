#include<stdio.h>


int main(){
    float montant,ttc;
    printf("veuillez saisirun montant en dollars et cents :");
    scanf("%.2f",&montant);
    ttc=montant+(montant*0.05);
    printf("le montant total = %f",ttc);
    return 0;
}