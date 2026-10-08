#include<stdio.h>
#include<stdlib.h>
 
 
 int main(){
 	
 	int  i, vet[10];
	int *p_num, maior;
 	printf("Escolha o valor de 10 elementos:\n");
 	
 	p_num = vet;
 	for(i = 0; i<10; i++){
 		printf("[%d]", i+1);
 		scanf("%d",p_num++); 
	 }
 	maior = vet[0];
 		for(i = 0; i<10; i++){
			if(vet[i]> maior){
		 		maior= vet[i];
		 	}
		 }
 	
 	printf("O Maior numero desse vetor e: %d",maior);
 	
 	
 	
 	
 	
 		
 	return 0;
 }