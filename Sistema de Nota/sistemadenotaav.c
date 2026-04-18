#include <stdio.h>

int main(){
	int nota1, nota2;
	int media;
	
	printf("Digite o valor da sua primeira nota: ");
	scanf("%d", &nota1);
	printf("Digite o valor da sua segunda nota: ");
	scanf("%d", &nota2);
	
		media = (nota1 + nota2) / 2;
	
	if (media>=6) {
		printf("Aprovado!");
	} else if (media<4) {
		printf("Reprovado.");
	}else{
        printf("Recuperacao");
    }
    return 0;
}