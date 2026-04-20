#include <stdio.h>

int main(){
    double f0 = 0, f1 = 1, fn;
    int i;
    printf("Termo 0: %d\n", f0);
    printf("Termo 1: %d\n", f1);
    for(i = 2; i<100;i++){
        fn = f0 + f1;
        printf("Termo %d: %.0f\n", i, fn);
        f0 = f1;
        f1 = fn;
    }
    return 0;
}