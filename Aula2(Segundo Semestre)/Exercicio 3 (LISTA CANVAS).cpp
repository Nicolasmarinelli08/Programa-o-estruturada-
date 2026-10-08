#include<stdio.h>
#include<stdlib.h>
 
 
 int main(){
 	int A[100], B[100], C[100];
  	int *pA, *pB ,*pC;
  	int tamanho, i;
   
   printf("Digite o tamanho dos vetores(MAXIMO 100)\n");
   if (scanf("%d", &tamanho) != 1 || tamanho < 1 || tamanho > 100) {
	   printf("Tamanho invalido. Informe um valor entre 1 e 100.\n");
	   return 1;
   }
   
   pA = A;
   pB = B;
   pC = C; 
   
    printf("Digite o tamanho do vetor A: (MAXIMO 100)\n");
	for(i = 0; i< tamanho; i++){
		printf("[%d]", i+1);
		scanf("%d", pA++);
	}
   printf("Digite o tamanho do vetor B: (MAXIMO 100)\n");
	for(i = 0; i< tamanho; i++){
		printf("[%d]", i+1);
		scanf("%d", pB++);
	}
   pA = A;
   pB = B;
   pC = C;
   for(i = 0; i< tamanho; i++){
   *pC = *pA + *pB;
    pA++;
    pB++;
    pC++;
   }
    pC = C;
	printf ("Vetor resultante C:\n");
	for(i = 0; i < tamanho; i ++){
		printf("C[%d] = %d\n", i + 1, *(pC++));
	}
 	return 0;
 }