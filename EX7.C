#include <stdio.h>

int main() {
    int montant, b20, b10, b5, b1;

    printf("Entrez un montant en dollars : ");
    scanf("%d", &montant);

    b20 = montant / 20;
    montant = montant % 20;

    b10 = montant / 10;
    montant = montant % 10;

    b5 = montant / 5;
    montant = montant % 5;

    b1 = montant;

    printf("Billets de 20$ : %d\n", b20);
    printf("Billets de 10$ : %d\n", b10);
    printf("Billets de 5$  : %d\n", b5);
    printf("Billets de 1$  : %d\n", b1);

    return 0;
}