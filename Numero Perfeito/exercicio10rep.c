//ler o numero, ver se o numero é perfeito(numero perfeito=quando a soma de todo seus divisores é igual a ele mesmo)
#include <stdio.h>

int main(){
    int n, soma = 0, i;
    printf("Digite um numero que nao seja 0: ");
    scanf(" %d", &n);
    for(i = 1; i < n; i++){
        if( n % i == 0){
            soma += i;               
        }
    }
    if(soma == n)
            printf(" %d e um numero perfeito", n);
                else
                    printf(" %d nao e um numero perfeito", n);
    return 0;
}