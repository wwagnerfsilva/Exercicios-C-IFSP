#include <stdio.h>
//mostrar lista de 1 a 1000 de multiplos de 3 e 5 que se encontram
int main (void){
    for(int i = 0;i < 1000; i++) {
        if(i %15 == 0){ //15 é o minimo multiplo comum de 3 e 5
            printf(" %d", i);
        }
    }
    return 0;
}