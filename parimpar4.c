#include <stdio.h>

// Função que verifica se o número é ímpar ou par
int impar (int valor){
    
    if( valor % 2 == 0){
        return 0;
    } else {
        return 1;
    }
}
int main(){
    int valor;
    
    printf("Digite um valor:\n");
    scanf("%d", &valor);
    printf("%d", impar(valor));

    return 0;
}