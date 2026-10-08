/*
 * Lista 1 – Revisão de Funções
 * Disciplina: Programação Estruturada
 *
 * Conteúdo:
 *  - Declaração e implementação de funções
 *  - Passagem de parâmetros por valor
 *  - Retorno de valores
 *  - Chamada correta das funções
 *
 * RESTRIÇÕES:
 *  - NÃO usar ponteiros
 *  - NÃO usar struct
 *
 * Arquivo: lista1-funcoes.c
 */

#include <stdio.h>

int soma(int a, int b);
int eh_par(int n);
int maior(int a, int b);
int potencia(int base, int expoente);
int fatorial(int n);

/* ============================================================
   PROGRAMA PRINCIPAL
   ============================================================ */

int main(void) {

    int a = 4, b = 5, r;

    /* TODO: chamar a função soma e armazenar o resultado em r */
    r=soma(a,b);
    printf("Soma: %d\n",r);
    /* TODO: chamar a função eh_par */
    printf("Par: %d\n",eh_par(5));
    if (eh_par(5) == 1) {
        printf("Numero par!!\n");
    } else {
        printf("Numero impar!!\n");
    }
    /* TODO: chamar a função maior */
    
    printf("Maior: %d\n", maior(a, b));

    /* TODO: chamar a função potencia */
    printf("Potencia: %d\n", potencia(a, b));

    /* TODO: chamar a função fatorial */
    printf("Fatorial: %d\n", fatorial(b));

    return 0;
}

/* ============================================================
   EXERCÍCIO 1 — Soma de dois números
   ============================================================ */

int soma(int a, int b) {
    
    return (a+b);
}

/* ============================================================
   EXERCÍCIO 2 — Verificar número par
   ============================================================ */

int eh_par(int n) {
	if(n%2==0)
	return 1;
    /* TODO: retornar 1 se n for par, 0 caso contrário */
    return 0;
}

/* ============================================================
   EXERCÍCIO 3 — Maior de dois números
   ============================================================ */

int maior(int a, int b) {
    return a > b ? a : b;
}

/* ============================================================
   EXERCÍCIO 4 — Potência
   ============================================================ */

int potencia(int base, int expoente) {
    int resultado = 1;
    if (expoente < 0) {
        return 0;
    }
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

/* ============================================================
   EXERCÍCIO 5 — Fatorial
   ============================================================ */

int fatorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

