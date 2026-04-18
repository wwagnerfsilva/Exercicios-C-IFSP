#include <stdio.h>

int main(){
    int x, y, z;
    printf("Digite os tres lados de um triangulo: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0){
        printf("numero tem de ser positivo\n");
        return 1;
    }

    if (x < y+z && y < z+x && z < x+y){
        printf("Forma um triangulo!: ");
        if (x == y && y == z){
            printf("Equilatero\n");
        } else if (x == y || y == z || z == x){
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Nao forma um triangulo\n");
    }

    return 0;
}