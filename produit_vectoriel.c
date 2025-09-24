#include <stdio.h>

int main() {
    float A[3], B[3], C[3];

    // Saisie des vecteurs 
    printf("Entrez les 3 composantes du vecteur A :\n");
    for (int i = 0; i < 3; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }

    printf("Entrez les 3 composantes du vecteur B :\n");
    for (int i = 0; i < 3; i++) {
        printf("B[%d] = ", i);
        scanf("%f", &B[i]);
    }

    // Calcul du produit vectoriel 
    C[0] = A[1]*B[2] - A[2]*B[1];
    C[1] = A[2]*B[0] - A[0]*B[2];
    C[2] = A[0]*B[1] - A[1]*B[0];

    // Affichage du résultat 
    printf("\nLe produit vectoriel C = A x B est : (%.2f, %.2f, %.2f)\n", C[0], C[1], C[2]);

    return 0;
}
