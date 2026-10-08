 #include<stdio.h>
 #include<stdlib.h>
 
 
 int main(){
 	
 	int quantidade, i, num[100];//Coloquei valor a mais que o usuario pode pedir(Funcional para um axercicio basico como este)
 	int *p_num;
 	
 	printf("Coloque a quantidade de elementos que precisa armazenar\n");
 	if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 100) {
 		printf("Quantidade invalida. Informe um valor entre 1 e 100.\n");
 		return 1;
 	}
 	p_num = num;
 	
 	for(i=0; i<quantidade; i++){
 		printf("Determine o valor:[%d]\n",i+1);
 		scanf("%d",p_num++);
	 }
	p_num=num;
 	for(i=0; i<quantidade; i++){
 		printf("\nValor dos elementos[%d]: %d",i+1,*(p_num++));
 		
	 }
 	
 	
 	
 	return 0;
 }