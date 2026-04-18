#include <stdio.h>

int main(){
    int numdig;
    printf("Digite um numero: ");
    scanf(" %d", &numdig);
    int i = 1;
    int expoente = 0;
    while(i * 2 < numdig){
        i *= 2;
        expoente++;
    }
    printf("Maior potencia de 2 menor que %d = 2^%d: %d", numdig, expoente, i);
    return 0;
}