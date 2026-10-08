#include<stdio.h>
#include<stdlib.h>
float media(float n1, float n2);
int main(){
	
	float nota1, nota2, mediaFinal;
	printf("Informe as notas\n");
	scanf("%f %f", &nota1, &nota2);
	mediaFinal= media(nota1, nota2);
	printf("nota final =%.2f", mediaFinal);
	
}
float media(float n1, float n2){
	float resultado;
	resultado=(n1+n2)/2;
	return resultado;
}