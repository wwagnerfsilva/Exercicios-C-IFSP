#include <stdio.h>

int main(){
    int x, y;
    for(x=0;x<=20;x++){
        y = x * x + 40;
        printf("X: %d         Y: %d\n", x, y);
    }
    return 0;
}