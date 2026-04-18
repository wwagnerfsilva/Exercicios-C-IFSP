#include <stdio.h>

int main(void){
    int soma = 0;
    for(int i=0;i<=1000; i+=3){
        soma +=i;
    }
    printf("A soma e igual a: %d", soma);
    return 0;
}