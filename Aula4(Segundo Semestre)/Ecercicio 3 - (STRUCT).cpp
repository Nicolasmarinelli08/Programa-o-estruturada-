#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 5
struct Aluno{
	char nome[50];
	int idade;
	float nota;
	};
void imprime_aluno(struct Aluno aluno1[]);
	 
int main(){
	
	struct Aluno aluno1[TAM];	
	for(int i=0; i< TAM; i++){
		printf("Digite o nome:\n");
		scanf(" %49[^\n]", aluno1[i].nome);
		printf("Digite a idade:\n");
		scanf("%d",&aluno1[i].idade);
		printf("Digite a Nota:\n");
		scanf("%f",&aluno1[i].nota);
}
	 imprime_aluno(aluno1);
	return 0; 
}
	void imprime_aluno(struct Aluno aluno1[]){
		for(int i=0; i<TAM; i++){
			printf("Nome:%s\n", aluno1[i].nome);
			printf("Idade:%d\n", aluno1[i].idade);
			printf("Nota:%.2f\n",aluno1[i].nota);
		}
	}