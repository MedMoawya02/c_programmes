#include <stdio.h>
#include <stdlib.h>
#define Max_Notes 100
//////
void Saisir(float notes[],int *taille){
int i;
do{
    printf("Combien le nombre des notes tu veut saisie ?\n");
    scanf("%d",taille);
}while(*taille<1||*taille>Max_Notes);
for(i=0;i<*taille;i++){
    do{
    printf("Note[%d]=",i+1);
    scanf("%f",&notes[i]);
    }while(notes[i]<0||notes[i]>20);

}

}

/////////
void Afficher(float notes[],int *taille){
    int i;
    if(*taille==0)
        printf("Tableau vide!!!");
    else{
        printf("Tableau des notes :\n");
        for(i=0;i<*taille;i++){
            printf("Note[%d] = %.2f\n",i+1,notes[i]);
        }
    }
}
/////////
float CalculerMoyenne(float notes[],int taille){
int  i;
float somme=0.0;
if (taille == 0)
    return 0.0f;
for(i=0;i<taille;i++){
    somme+=notes[i];
}
return somme/taille;
}
float TrouverMax(float notes[],int taille,int *idMax){
    float max=notes[0];
    *idMax=0;
    int i;
    for(i=0;i<taille;i++){
        if(notes[i]>max){

            max=notes[i];
            *idMax=i;
        }
    }
    return max;
}
float TrouverMin(float notes[],int taille,int *idmin){
    *idmin=0;
    int i;
    float min=notes[0];
    for(i=0;i<taille;i++){
        if(notes[i]<min){
            min=notes[i];
            *idmin=i;
        }
    }
    return min;
}
int compterAdmis(float notes[],int taille){
    int admis=0;
    for(int i=0;i<taille;i++){
        if(notes[i]>10){
            admis++;
        }
    }
    return admis;
}
int compterNonAdmis(float notes[],int taille){
    int Nonadmis=0;
    for(int i=0;i<taille;i++){
        if(notes[i]<10){
            Nonadmis++;
        }
    }
    return Nonadmis;
}
//////////
int ajouterNote(float notes[],int *taille,float note){
    if(*taille>=Max_Notes){
           printf("Erreur : dépassement de la capacité maximale (%d).\n", Max_Notes);
    }
    notes[*taille]=note;
    (*taille)++;
    return 1;
}
/////////
int modifierNote(float notes[] ,int taille,int index,float nouvelleValeur){
    if(index<0||index>=taille)
        printf("Index invalid");
    else{
        notes[index]=nouvelleValeur;
    }

    return 1;
}
//////
int supprimerNote(float notes[],int *taille,int index){
    if (index < 0 || index >= *taille) {
        printf("Erreur : index invalide.\n");
        return 0;
    }
    for(int i=index;i<*taille;i++){
        notes[i]=notes[i+1];
    }
    (*taille)--;
    printf(" Suppression reussie de l'element à l'index %d.\n", index);
    return 1;
}

int main()
{
    float notes[Max_Notes];
    int taille=0;
    int operation;
    do{
    printf("\n---Menu---\n");
    printf("1_Saisir N notes :\n");
    printf("2_Afficher les notes :\n");
    printf("3_Statistiques :\n");
    printf("4_Ajouter une note :\n");
    printf("5_Modifier une note par index :\n");
    printf("6_Supprimer une note : \n");
    printf("0_quitter");
    printf("\n");
    printf("Quelle operation veut effectuez ?");
    scanf("%d",&operation);
    switch(operation){
    case 1:
        Saisir(notes,&taille);
        break;
    case 2:
        Afficher(notes,&taille);
        break;
    case 3:{
        printf("La moyenne des notes c'est :%.2f\n",CalculerMoyenne(notes,taille));
        int IdMax;
        float max=TrouverMax(notes,taille,&IdMax);
        printf("Note maximale : Note[%d] = %.2f\n", IdMax, max);

        int IdMin;
        float min=TrouverMin(notes,taille,&IdMin);
        printf("Note minimale : Note[%d] = %.2f\n", IdMin, min);
        printf("Les nombres des admis est :%d\n",compterAdmis(notes,taille));
        printf("Les nombres des Non admis est :%d\n",compterNonAdmis(notes,taille));
        break;
    }
    case 4:{
        float valeur;
        printf("Entrez la valeur a ajoutee:");
        scanf("%f",&valeur);
        if(ajouterNote(notes,&taille,valeur)){
            printf("Note ajoutee avec succes .\n");
        }
        else
            printf("Echec de l'ajout de la note.\n");

    }
    case 5:{
        int index;
        float nouvelleV;
        printf("Choisi l'index a modifier :\n");
        scanf("%d",&index);
        printf("Entrez la nouvelle valeur :\n");
        scanf("%f",&nouvelleV);
        if(modifierNote(notes,taille,index,nouvelleV))
            printf("Valeur modifiee avec succes.\n");
        else
            printf("Echec de la modification.\n");

    }
    case 6:{
        int index;
        printf("Entrez l'index qui tu veux supprimer:\n");
        scanf("%d",&index);
        supprimerNote(notes,&taille,index);
    }
    case 0:
        break;
    default:
        printf("Choix invalid");
        break;
    }


    }while(operation!=0);
    return 0;
}
