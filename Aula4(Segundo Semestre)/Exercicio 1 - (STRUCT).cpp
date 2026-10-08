#include<stdio.h>
#include<stdlib.h>
#define MAX 100
	typedef struct{
		char nome[50];
		int idade;
		float nota;
	}Aluno;
int main(){
	
	 Aluno aluno1;
	
	printf("Digite o nome:\n");
	scanf(" %49[^\n]", aluno1.nome);
	printf("Digite a idade:\n");
	scanf("%d",&aluno1.idade);
	printf("Digite a Nota:\n");
	scanf("%f",&aluno1.nota);
	
	printf("Nome:%s\n", aluno1.nome);
	printf("Idade:%d\n", aluno1.idade);
	printf("Nota:%.2f\n",aluno1.nota);
	return 0; 
}