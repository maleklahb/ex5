#include <stdio.h>
#include<math.h>
void main() {
    float H0, eps, h, v, v1;
    int nbr;
    const float g = 9.81;

    printf("Entrez la hauteur initiale  ");
    scanf("%f", &H0);
    printf("Entrez le coefficient de rebond eps  ");
    scanf("%f", &eps);
    printf("Entrez le nombre de rebonds nbr ");
    scanf("%d", &nbr);

    if (H0 <= 0 || eps < 0 || eps >= 1 || nbr < 0) {
        printf("donner des autres valeurs");
    }

    h = H0;

    for (int i = 0; i < nbr; i++) {
        v = sqrt (2 * g * h);       
        v1 = eps * v;             
        h = (v1 * v1) / (2 * g);   
    }

    printf("Hauteur apres %d rebonds : %.2f", nbr, h);
}

