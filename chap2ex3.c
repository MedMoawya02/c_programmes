#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include<math.h>
int main()
{
       


        int heures[]={8,9,11,12,2,3,7,9};
        int minutes[]={00,43,19,47,00,45,00,45};
        int taille=sizeof(heures)/sizeof(heures[0]);
        int h, m,i;
        printf("Entrez une heure (heures minutes) : ");
        if (scanf("%d %d", &h, &m) != 2 || h < 0 || h > 23 || m < 0 || m > 59) {
        printf("Heure invalide.\n");
        }
        else{

        int total_minutes=h*60+m;
        int Min = abs(heures[0] * 60 + minutes[0] - total_minutes);
        int nbr_Proche = 0;
        for(i=1;i<taille;i++){
            int moment=heures[i]*60+minutes[i];
            int diff=abs(moment-total_minutes);
            if(diff<Min){
                Min=diff;
                nbr_Proche=i;
            }
        }
        printf("L'heure la plus proche est %d:%d\n", heures[nbr_Proche], minutes[nbr_Proche]);
        }

    return 0;
}