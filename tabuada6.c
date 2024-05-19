#include <stdio.h>

void imprimirtabuada (int numero){
    int i;
    
    for( i=1; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main(){
    int numero;

    do {
    printf("Informe um numero de 1 a 9:\n");
    scanf("%d", &numero);
    if( numero < 1 || numero > 9){
        printf("O valor inserido nao esta entre 1 e 9! Tente novamente.\n");
    } else {
        imprimirtabuada(numero);
    }
    } while (numero < 1 || numero > 9);

    return 0;
}