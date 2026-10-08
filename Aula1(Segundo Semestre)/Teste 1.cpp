#include<stdio.h>
#include<stdlib.h>


int potencia(int base, int expoente){
	int resultado=1;
	if (expoente < 0) {
		return 0;
	}
	for(int i =0; i<expoente; i++){
		resultado*=base;//Fica guardado na variavel o valor da primeira operacao, logo em seguida vem outro valor que e somado com o outro valor da variavel
	}
	return resultado;
}

int main(){
	int base, expoente;
	
	printf("Escolha o valor da base e do expoente\n");
	scanf("%d %d", &base, &expoente);
	if (expoente < 0) {
		printf("Expoente negativo nao suportado.\n");
		return 1;
	}
	printf("Resultado:%d",potencia(base, expoente));
	return 0;
}