#include<stdio.h>
#include<stdlib.h>

float media(float n1, float n2);//ASSINATURA(AVISO PREVIO AO COMPILADOR)

int main(){
	
	float valor1, valor2, mediaTotal;
	printf("Coloque dois numeros:\n ");
	scanf("%f%f", &valor1,&valor2);
	mediaTotal= media(valor1, valor2); 
	printf("MEDIA:%.2f",mediaTotal);
	
}
	float media(float n1, float n2){
		return (n1+n2)/2;
		
	}