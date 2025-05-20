#include <stdio.h>
#include <string.h>

int main () {
	struct Pessoa{
		char nome [50];
		int idade;
	};
	
	int main(){
		struct pessoa lista [3];
		
		for (int i = 0; 1 < 3; i++){
			printf("Digite o nome da pessoa %d:" , i+1);
			scanf("%s", lista [i].nome);
			printf("digite a idade: ");
			scanf("%d" , &lista [i] .idade);
		}
	}
	return 0; 
}
