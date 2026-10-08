#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num[5],*p_num, i;
	p_num = num; // INICIALIZANDO UM PONTEIRO Quando utilizamos o nome de um vetor sozinho ele representa o endereco do primeiro elemento
	
	printf ("Lendo os elementos da matriz\n");
	for (i=0; i<5;i++){
		printf("\n %d elemento: ", i+1);
		scanf("%d", p_num++);//FAZ O PONTEIRO ANDAR UMA POSICAO NO VETOR
	}
	p_num = num; //VOLTANDO PRO COMECO
	printf("Imprime os elementos da matriz\n");
	for(i=0; i<5; i++){ 
		printf("\n [%d]= %d",i, *(p_num++) );
	
	}
	
	return 0;
}