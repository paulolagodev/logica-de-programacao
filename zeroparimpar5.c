#include <stdio.h>

int pnz (int N){

    if( N > 0){
        return 1;
    } else if (N < 0){
        return -1;
    } else {
        return 0;
    }
}
int main(){

    int valor;

    printf("Insira um valor:\n");
    scanf("%d", &valor);
    printf("%d", pnz(valor));

    return 0;
}