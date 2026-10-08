#include<stdio.h>
#include<stdlib.h>
int potencia(int base, int expoente) {
    int resultado = 1;

    if (expoente < 0) {
        return 0;
    }

    for(int i = 0; i < expoente; i++) {
        resultado =resultado * base;//(1*base) Pfor(2*base)...(i>expoente = Sai do For)
    }

    return resultado;
}

int main() {

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %d\n", potencia(base, expoente));//Chama a funcao

    return 0;
}