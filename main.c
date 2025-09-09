#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct {
    char  cne[20];
    char  nom[40];
    char  prenom[40];
    float notes[4];   // 4 notes maximum
    float moyenne;    // calculée
} Etudiant;

Etudiant classe[30]; // max 30 étudiants
int nbEtudiants = 0;
//////
void ajouteretudiant(){
   if(nbEtudiants>30){
    printf("la classe est pleine .");
    return;
   }
   printf("Cne:");
   scanf("%s",classe[nbEtudiants].cne);
   printf("Nom:");
   scanf("%s",classe[nbEtudiants].nom);
   printf("Prenom:");
   scanf("%s",classe[nbEtudiants].prenom);
   for(int i=0;i<4;i++){
    classe[nbEtudiants].notes[i]=0;
   }
   classe[nbEtudiants].moyenne=0;
   nbEtudiants++;
   printf("Etudiant ajoutee avec succes\n");
}
//////
void saisirNotes(){
    char cne[20];
    float s=0;
    printf("entrez Cne:");
    scanf("%s",cne);
    for(int i=0;i<nbEtudiants;i++){

    if(strcasecmp(classe[i].cne,cne)==0){
            printf("Saisir les 4 notes:\n");
        for(int j=0;j<4;j++){
            do{

            printf("note[%d]=",j+1);
            scanf("%f",&classe[i].notes[j]);
            }while(classe[i].notes[j]<0||classe[i].notes[j]>20);
            s+=classe[i].notes[j];
        }

    classe[i].moyenne=s/4;
     printf("Notes enregistrées avec succès. Moyenne = %.2f\n", classe[i].moyenne);
    }
    }
}
void afficheretudients(){
    for (int i=0;i<nbEtudiants;i++){
        printf("%s %s %s\n",classe[i].cne,classe[i].nom,classe[i].prenom);
        for(int j=0;j<4;j++){
            printf("Note [%d]=%.2f",j+1,classe[i].notes[j]);
        }
        printf("  Moyenne = %.2f\n", classe[i].moyenne);
        printf("---------------------------\n");
    }
}
/////////
void bulletin(){
    char cne[20];
    printf("Entrez le Cne :\n");
    scanf("%s",cne);
    for(int i=0;i<nbEtudiants;i++){
        if(strcasecmp(classe[i].cne,cne)==0){
            printf("Le bulletin de %s:\n",cne);
            printf("%s %s",classe[i].nom,classe[i].prenom);
            for(int j=0;j<4;j++){
                printf("Note[%d]=%.2f\n",j+1,classe[i].notes[j]);
            }
            printf("Moyenne general:%.2f\n",classe[i].moyenne);
        }
    }
}
/////
void calculMoyenne(){
    if(nbEtudiants!=0){
        float moy,somme=0;
        printf("La moyenne general du classe:\n");
        for(int i=0;i<nbEtudiants;i++){
            somme+=classe[i].moyenne;
        }
        moy=somme/nbEtudiants;
        printf("%.2f",moy);
    }
    else{
        printf("Tableau vide\n");
    }
}
int main()
{
        int operation;
    do{

    printf("---Menu---\n");
    printf("1.Ajouter un etudiant :\n");
    printf("2.Saisir les notes d'un etudiant :\n");
    printf("3.Afficher tous les etudiants :\n");
    printf("4.Afficher bulletin d'un etudiant :\n");
    printf("5.Calculer lamoyenne generale:\n");

    printf("0.Quitter :\n");
    printf("L'operation ?\n");
    scanf("%d",&operation);
    switch(operation){
    case 1:{
        ajouteretudiant()
;        break;
    }
    case 2:{
        saisirNotes();
        break;
    }
    case 3:
        afficheretudients();
        break;
    case 4:
        bulletin();
        break;
    case 5:
        calculMoyenne();
        break;


    case 0:
        break;
    default:
            printf("Choix invalid.");

    }
    }while(operation!=0);


    return 0;
}
