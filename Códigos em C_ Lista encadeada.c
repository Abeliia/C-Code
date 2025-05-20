/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct No {
	int valor;
	struct No *prox;
	
}No;
void imprimir(No *inicio){
	No *atual = inicio;
	while(atual != NULL){
		printf("%d ->" , atual ->valor);
		atual = atual->prox;
		
	
	}
	printf("NULL\n");
}
int main () {
	No *inicio = malloc(sizeof(No));
	inicio->valor = 1;
	No *inicio = malloc(sizeof(No));
	inicio->prox->valor = 2; 
	inicio->prox->prox = NULL;
	imprimir(inicio);
	return 0;
	
}


