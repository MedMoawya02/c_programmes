#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct{
    char cne[20];
    char nom [40];
    char prenom[40];
    float notes[4];
    float moyenne;
}Etudient;
Etudient classe[30];
int nbEtudient=0;
//////
void ajouterEtudiant(){
    char cne[20],nom[40],prenom[40];
    if(nbEtudient>=30){
        printf("Ne peux pas depasser 30.");
        return;
    }
    printf("Entrez le cne:\n");
    scanf("%s",classe[nbEtudient].cne);
    printf("Entrez le nom:\n");
    scanf("%s",classe[nbEtudient].nom);
    printf("Entrez le prenom:\n");
    scanf("%s",classe[nbEtudient].prenom);
    for(int i=0;i<4;i++){
        classe[nbEtudient].notes[i]=0;
    }
    classe[nbEtudient].moyenne=0;
    nbEtudient++;
    printf("Étudiant ajouté avec succès.\n");


}
//////
void SaisirNotes() {
    char cne[20];
    printf("Entrez le CNE : ");
    scanf("%19s", cne);

    for (int i = 0; i < nbEtudient; i++) {
        printf("DEBUG: comparant avec classe[%d].cne = %s\n", i, classe[i].cne);
        if (strcmp(classe[i].cne, cne) == 0) {
            float S = 0;
            for (int j = 0; j < 4; j++) {
                float note;
                do {
                    printf("Note[%d] = ", j + 1);
                    scanf("%f", &note);
                    if (note < 0 || note > 20) {
                        printf("Note invalide. Réessayez.\n");
                    }
                } while (note < 0 || note > 20);
                classe[i].notes[j] = note;
                S += note;
            }
            classe[i].moyenne = S / 4.0;
            printf("La moyenne = %.2f\n", classe[i].moyenne);
            return;
        }
    }

    printf("CNE introuvable.\n");
}

//////
void afficherEtudiants(){
    if(nbEtudient==0){
        printf("Aucun etudient\n");
        return;
    }
    for(int i=0;i<nbEtudient;i++){
        printf("%s %s %s",classe[i].cne,classe[i].nom,classe[i].prenom);
        for(int j=0;j<4;j++){
        printf("Note[%d]=%.2f",j+1,classe[nbEtudient].notes[j]);
        }
        printf("La moyenne = %.2f",classe[i].moyenne);
    }

        printf("Cne introuvable\n");
    }



int main()
{
    int operation;
do{

    printf("----Menu----\n");
    printf("1_Ajouter un etudient\n");
    printf("2_Saisir les notes d'un etudiant\n");
    printf("3_ Afficher tous les etudiants\n");
    printf("4_Afficher bulletin d’un etudiant\n");
    printf("5_Calculer la moyenne generale\n");
    printf("L'operation a effectuer :");
    scanf("%d",&operation);
    printf("0_Quitter\n");
    switch(operation){
    case 1:{
        ajouterEtudiant();
        break;
    }
    case 2:{
        SaisirNotes();
        break;
    }
    case 3:{
        afficherEtudiants();
        break;
    }
    case 4:{}
    case 5:{}
    case 0:{}
    }
}while(operation!=0);

    return 0;
}
