#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int vet [5];
	int*ini, *fim;
	int *p;
	ini=vet;
	fim= &vet[4];//Fim = vet+4
	
	for( p= ini; p<=fim; p++){
		scanf("%d", p); 
	}
	for( p = ini; p<=fim; p++){
		printf("%d\n",*p);
	}
	
	
	return 0;
	
	//Quando fazemos P++ ele nao avanca um byte, mas sim um elemento inteiro, nesse caso (int x) ele salto 4 bytes (Tamanho da variavel x) 
}