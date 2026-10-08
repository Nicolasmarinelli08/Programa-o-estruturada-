#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 5

	typedef struct{
		char nome[50];
		int idade;
		float nota;
	}Aluno;
int main(){
	 Aluno aluno1[TAM]; 
	
	for(int i = 0; i < TAM; i++){
		printf("[%d]Digite o nome:",i+1);
		scanf(" %49[^\n]", aluno1[i].nome);
		printf("[%d]Digite a idade:",i+1);
		scanf("%d",&aluno1[i].idade);
		printf("[%d]Digite a Nota:",i+1);
		scanf("%f",&aluno1[i].nota);
		printf("\n");
}

	for(int i = 0; i < TAM; i++){
		printf("[%d]Nome:%s\n",i+1,aluno1[i].nome);
		printf("[%d]Idade:%d\n",i+1,aluno1[i].idade);
		printf("[%d]Nota:%.2f\n",i+1,aluno1[i].nota);
}
	return 0; 
}
	
	

