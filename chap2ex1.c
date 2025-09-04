#include <stdio.h>
#include <stdlib.h>
int Count(int number){
    int counter=0;
    if(number==0)
        return 1;
    while(number!=0){
        number=number/10;
        counter++;
    }
    return counter;

}
int main()
{
    int prefixe,id,code,numero_art,chiffre_controle;
    int somme=0;
    do{

    printf("Entrez l'Isbn:");
    scanf("%d %d %d %d %d",&prefixe,&id,&code,&numero_art,&chiffre_controle);
    somme=Count(prefixe)+Count(id)+Count(code)+Count(numero_art)+Count(chiffre_controle);
    }while((prefixe!=978 &&prefixe!=979)||somme!=13);


    printf("l'Isbn : %i-%i-%i-%i-%i\n",prefixe,id,code,numero_art,chiffre_controle);
    printf("Prefixe GS1 :%i\n ",prefixe);
    printf("Identifient de groupe :%i\n ",id);
    printf("Code de l'editeur :%i\n ",code);
    printf("numero de l'article :%i\n ",numero_art);
    printf("chiffre de controle :%i ",chiffre_controle);



    return 0;
}
