#include <stdio.h>
#include <stdlib.h>


void calcularEstatisticas(int *vetor, int tamanho, int *maior, int *menor, float *media);

int main(){ 
	int *vetor = NULL;
	int maiorTemp, menorTemp,tamanhoTotal,i;
	float mediaTemp;
	
	printf("Coloque a quantidade de leituras que desejar\n");
	scanf("%d",&tamanhoTotal);
	
	if(tamanhoTotal<=0){
		printf("###Quantidade invalida###\n");
		return 1;
	}
	vetor = (int*)malloc(tamanhoTotal *sizeof(int));
	
	if(vetor==NULL){
		printf("#ERRO MEMORIA INSUFICIENTE#");
		return 1;
	}
	printf("Digite a quantidade %d (Numeros inteiros)\n", tamanhoTotal);
	for(i=0; i<tamanhoTotal; i++){
		printf("Posicao[%d]",i + 1);
		if (scanf("%d", (vetor + i)) != 1) {
			printf("Entrada invalida.\n");
			free(vetor);
			return 1;
		}
	}
	
	//Em C, quando passamos variáveis por referência usando ponteiros, a função não precisa usar a palavra return para enviar dados de volta. Ela altera as variáveis originais em tempo real.
 	calcularEstatisticas(vetor, tamanhoTotal, &maiorTemp, &menorTemp, &mediaTemp);

	printf("Maior temperatura registrada:%d\n", maiorTemp);
	printf("Menor temperatura registrada:%d\n", menorTemp);
	printf("Media das temperaturas:%.2f\n",mediaTemp);
	
	free(vetor);
	vetor = NULL;
	
	return 0;
}
 	void calcularEstatisticas(int *vetor, int tamanho, int *maior, int *menor, float *media){
 		*maior = *vetor;
 		*menor = *vetor;
				float soma = 0.0f;
 		
 		for(int i = 0; i<tamanho; i++){
 			int valorAtual =*(vetor +i); //O asterisco do lado de fora se chama operador de desreferenciação. Ele diz: "Vá até esse endereço de memória que acabamos de calcular e pegue o valor que está guardado lá de dentro."
 			
			 if (valorAtual > *maior){
 				*maior = valorAtual; //Ao fazer *maior = valor_atual, o computador vai até o endereço "100" (que pertence à main) e coloca o maior número lá dentro.
	        } 
 			if(valorAtual < *menor){//Ao fazer *menor = valor_atual, o computador vai até o endereço "104"(que pertence à main) e coloca o maior número lá dentro.
 				*menor = valorAtual;
			 }
			 soma+=valorAtual;
	 }
	 *media = soma / tamanho; //O asterisco (*) antes do ponteiro funciona como uma ordem: "Vá até o endereço que está guardado aqui e mude o que estiver lá dentro".
}