#include <stdio.h>

main(){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero %2 == 0){
		printf("numero e par.", numero);
		
		} else {
		printf("numero e impar.", numero);
			}
			
			return 0;
	
}
