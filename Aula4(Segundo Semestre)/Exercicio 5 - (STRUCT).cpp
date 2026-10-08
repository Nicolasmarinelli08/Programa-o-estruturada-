#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 3
struct Aluno{
		char nome[100];
		int nota; 
};
void le_turma(struct Aluno turma[], int quantidade);
void imprime_turma(struct Aluno turma[], int quantidade);
float media_turma(struct Aluno turma[], int quantidade);

int main(){
	struct Aluno turma1[TAM];
	
	le_turma(turma1, TAM);
	imprime_turma(turma1, TAM);
	float media = media_turma(turma1, TAM);
		printf("Media da turma:%.2f", media);
		return 0;
	}
	

void le_turma(struct Aluno turma[], int quantidade){
		for(int i=0; i<quantidade; i++){
		printf("[%d]Coloque o seu nome: ",i+1);
		scanf(" %99[^\n]", turma[i].nome);
		printf("[%d]Coloque a sua nota: ",i+1);
		scanf("%d", &turma[i].nota);
	}
}

void imprime_turma(struct Aluno turma[], int quantidade){
	for(int i = 0; i < quantidade; i++){
		printf("Nome[%d]:%s\n", i + 1, turma[i].nome);
		printf("Nota[%d]:%d\n", i + 1, turma[i].nota);
	}
}

float media_turma(struct Aluno turma[], int quantidade){
	float soma = 0;
	for(int i=0; i<quantidade; i++){
		soma+=turma[i].nota;
	}
	return soma/quantidade;
}