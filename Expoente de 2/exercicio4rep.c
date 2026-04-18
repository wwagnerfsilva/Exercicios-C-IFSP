#include <stdio.h> 

int main(){
    int expoente, resultado = 1, i;
    printf("Digite o numero que vai ser o expoente de 2: ");
    scanf(" %d", &expoente);
    for(i=0; i<expoente; i++){
        resultado = resultado * 2;
    }
    printf("2 elevado a %d e: %d", expoente, resultado);
    return 0;
}