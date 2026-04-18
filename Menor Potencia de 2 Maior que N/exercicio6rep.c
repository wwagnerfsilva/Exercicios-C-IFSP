#include <stdio.h>

int main(){
    int numdig;
    printf("Digite um numero: ");
    scanf(" %d", &numdig);
    int i = 1;
    int expoente = 0;
    while(i<=numdig){
        i = i * 2;
        expoente++;
    }
    printf("Menor potencia de 2 maior que %i: 2^%d: %d\n", numdig, expoente, i);
    return 0;
}