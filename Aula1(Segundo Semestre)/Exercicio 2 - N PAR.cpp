#include<stdio.h>
#include<stdlib.h>

int ehPar(int n){
	if(n % 2==0){
		return 1;
	}
		return 0; //ELE IRA SER IMPAR
				
} 


int main(){
	int num; 
	
	printf("Digite um numero\n");
	scanf("%d",&num);
	
		if(ehPar(num)==1){ //CHAMA A FUNCAO //PASSA O VALOR DE NUM PARA A FUNCAO, ENTRANDO NA VARIAVEL "n"
			printf("NUMERO PAR!\n");
	}
		else
			printf("NUMERO IMPAR!\n");
}
	
