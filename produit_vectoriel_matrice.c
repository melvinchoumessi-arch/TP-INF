#include <stdio.h>

int main() {
    int n, p;

    printf("Entrez la taille du vecteur (nombre de colonnes de la matrice) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &p);

    int V[n], M[n][p], R[p];

    // Saisie du vecteur 
    printf("Entrez les elements du vecteur V :\n");
    for (int i = 0; i < n; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &V[i]);
    }

    // Saisie de la matrice 
    printf("Entrez les elements de la matrice M :\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &M[i][j]);

    // Produit V x M 
    for (int j = 0; j < p; j++) {
        R[j] = 0;
        for (int i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    // Affichage 
    printf("\nResultat du produit V x M :\n");
    for (int j = 0; j < p; j++)
        printf("%d\t", R[j]);
    printf("\n");

    return 0;
}
