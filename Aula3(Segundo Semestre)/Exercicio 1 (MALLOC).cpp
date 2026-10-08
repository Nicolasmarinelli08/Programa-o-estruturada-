#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *vetor;
    int soma = 0;

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

        soma = soma + vetor[i];
    }

    printf("\nSoma = %d\n", soma);

    free(vetor);

    return 0;
}