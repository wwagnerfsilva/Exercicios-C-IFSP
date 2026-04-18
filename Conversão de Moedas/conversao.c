#include <stdio.h>

int main()
{
	
float real,euro;

printf("Qual o valor em euros que gostaria de converter para real?:  ");
scanf("%f", &euro);

real = euro*3.0;

printf("O valor em reais e: R$ %2.f", real);

return 0;


}

