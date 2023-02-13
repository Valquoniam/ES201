#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

int main() {
    int vector1[N], vector2[N], sum[N];
    srand(time(0));

    // Initialisation des vecteurs avec des valeurs aléatoires
    for (int i = 0; i < N; i++) {
        vector1[i] = rand() % 100;
        vector2[i] = rand() % 100;
    }

    // Somme des deux vecteurs
    for (int i = 0; i < N; i++) {
        sum[i] = vector1[i] + vector2[i];
    }

    // Affichage de la somme
    printf(sum[N]);
    return 0;
}