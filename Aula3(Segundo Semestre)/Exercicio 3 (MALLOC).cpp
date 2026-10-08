#include <stdio.h>
#include <stdlib.h>

void mostrarVetor(int *vetor, int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {

    int n;
    int *vetor;

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

    printf("\nVetor: ");

    mostrarVetor(vetor, n);

    free(vetor);

    return 0;
}	