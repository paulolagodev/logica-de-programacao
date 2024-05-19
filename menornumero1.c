#include<stdio.h>

// Função que verifica qual o menor valor inserido pelo usuário
int menor_numero(int valor1, int valor2){
    if(valor1<valor2){
        return valor1;
    } else {
        return valor2;
    }
}
int main(){
    int valor1, valor2;

    // Solicita ao usuário dois valores
    printf("Digite um valor:\n");
    scanf("%d", &valor1);
    printf("Digite outro valor:\n");
    scanf("%d", &valor2);

    // Exibe ao usuário o menor valor inserido
    printf("Menor valor informado: %d\n", menor_numero(valor1, valor2));

    return 0;
}