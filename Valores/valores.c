#include <stdio.h>

int main(){
	float a, b, c;
	float maior, menor, media;
	
	printf("Digite primeiro valor: ");
	scanf("%f", &a);
	printf("Digite segundo valor: ");
	scanf("%f", &b);
	printf("Digite terceiro valor: ");
	scanf("%f", &c);
	
	if ( a>=b && a>=c ){
		maior = a;
		}else if( b>=a && b>=c){
		maior = b;
		}else{
		    maior = c;
	    }	
	    
	    if ( a<=b && a<=c ){
		menor = a;
		}else if( b<=a && b<=c){
		menor = b;
		}else{
            menor = c;
	    }	
	    
	    media = (a+b+c) / 3;
	    
	    printf("Maior: %.2f\n", maior);
	    printf("Menor: %.2f\n", menor);
	    printf("Media: %.2f\n", media);
	    
		return 0;
}
