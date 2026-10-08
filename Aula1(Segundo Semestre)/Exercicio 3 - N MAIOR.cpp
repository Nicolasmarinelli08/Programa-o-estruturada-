#include<stdio.h>
#include<stdlib.h>

int maior(int num1, int num2){
	if(num1 > num2){
		return num1;
	}
	else{
		return num2;
	}
}
	

int main(){
	
	int a, b, m;
	
	printf("\nDigite o valor um e dois:\n ");
	scanf("%d %d",&a,&b);
	
	m=maior(a,b);
	printf("O maior numero e: %d", m);
}
