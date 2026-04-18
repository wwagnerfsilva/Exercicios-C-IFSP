#include <stdio.h>

int main(){
    char op;
    double a, b;
    printf("Digite o operador (+, -, *, /): ");
    scanf("%c", &op);
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    switch(op){
        case'+':
        printf("%.2lf + %.2lf =  %.2lf\n", a, b, a+b);
        break;
        case'-':
            printf("%.2lf - %.2lf =  %.2lf\n", a, b, a-b);
            break;
                case'*':
                 printf("%.2lf * %.2lf =  %.2lf\n", a, b, a * b);
                break;
            case'/':
            if( b==0 ){
            printf("Nao e possivel dividir por zero!");
            }else{
            printf("%.2lf / %.2lf = %.2lf\n", a, b, a/b);
        }
        break;
        default:
        printf("Operador invalido\n");
    }
    return 0;
}
