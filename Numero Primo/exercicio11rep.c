#include <stdio.h>
//determinar se um numero é primo

int main(){
    int n, i;
    printf("Digite um numero: ");
    scanf(" %d", &n);
    if(n <= 1){
        printf("Nao e primo");
    }else{
        for(i = 2; i < n; i++){
            if( n % i == 0){
                printf("Nao e primo");
                break;
                }  
            }
            if(n == i)
                printf("E primo");
        }
    return 0;
}