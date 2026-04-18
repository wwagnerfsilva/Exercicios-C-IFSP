#include <stdio.h>
//usuario entra com valores positivos, caso entre com um negativo, para e faz a media dos valores
int main(){
    int valor, quantidade;
    float media, soma;

    soma = 0;
    quantidade = 0;
    printf("Digite valores positivos(negativos para parar) \n");
    do {
        printf("Valor: ");
        scanf("%d", &valor);
            if (valor >= 0){
                soma += valor;
                quantidade++;
            }
        }while(valor >= 0);
        if(quantidade == 0){
            printf("Nenhum valor fornecido");
                }else{
                media = soma / quantidade;
            printf("Media: %.2f ", media);
        }
    return 0;
}