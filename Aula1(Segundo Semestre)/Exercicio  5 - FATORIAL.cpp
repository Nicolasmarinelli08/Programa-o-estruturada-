#include<stdio.h>
#include<stdlib.h>

int fatorial(int n){
	if(n < 0){
		return 0;
	}
	if(n == 0 || n == 1){
		return 1;
	}
	else {
		return  n * fatorial(n-1);
	}
}

int main(){
	int n;


	printf("Escreva um numero para que ele seja fatorial: \n");
	scanf("%d", &n);

	if (n < 0) {
		printf("Fatorial nao definido para numeros negativos.\n");
		return 1;
	}



 	printf("Fatorial: %d\n", fatorial(n));






return 0; 
}