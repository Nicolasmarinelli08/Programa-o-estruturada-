#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 5
struct Aluno{
		char nome[100];
		int idade; 
};

void imprime_aluno(struct Aluno aluno1[]);

int main(){
	struct Aluno aluno1[TAM];
	for(int i= 0; i<TAM; i++){
		printf("[%d]Coloque o seu nome: ",i+1);
		scanf(" %99[^\n]", aluno1[i].nome);
		printf("[%d]Coloque a sua idade: ",i+1);
		scanf("%d", &aluno1[i].idade);
	}
	imprime_aluno(aluno1);
	
	return 0;
}
void imprime_aluno(struct Aluno aluno1[]){
		for(int i=0; i<TAM; i++){
			printf("Nome[%d]:%s\n",i+1,aluno1[i].nome);
			printf("Idade[%d]:%d\n",i+1,aluno1[i].idade);
		}
	}
	
