#include<stdio.h>
#include<stdlib.h>

int main(){
	int x;
	int *p_x = &x;
	
	printf("Escolha um valor para X");
	scanf("%d", &x);
	
	printf("O valor de X e : %d\n",*p_x); // Fui no endereco de memoria da variavael e acessei da forma indireta a "bagagem" que ela possui;
	printf("O endereco de X e: %p\n", (void *)p_x);
	printf("O endereco do ponteiro p_x e: %p\n", (void *)&p_x);
   
    
	/*
	
	                                                                                                                                                                                            	1004|   x   | variavel
	O ponteiro ira ter uma parte na memoria reservada a ele quando ele for declarado, nesse endereco o ponteiro ira apontar uma variavel que ficara salvo o endereco dela no endereco do ponteiro;  1000|  1004 | ponteiro
	O ponteiro armazena apenas o endereco do byte de numereo mais baixo ( Primeiro byte de  um bloco )
 	

	*/
	
	
  
  return 0;
}