
#include <stdio.h>
#include <stdlib.h>

void calcular(int *vetor, int n, int *maior, int *menor) {

    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < n; i++) {

        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }

        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {

    int n;
    int *vetor;
    int maior;
    int menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int*)malloc(n *sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {

        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    calcular(vetor, n, &maior, &menor);

    printf("\nMaior = %d\n", maior);
    printf("Menor = %d\n", menor);

    free(vetor);

    return 0;
}