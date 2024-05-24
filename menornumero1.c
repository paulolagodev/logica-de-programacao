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
    char c;
    
    printf("Digite um valor:\n"); // Solicita ao usuário um valor inteiro
    
    while(scanf("%d", &valor1) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números inteiros
     while((c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
     printf("O valor informado nao eh um numero inteiro!\n");
     printf("Informe um valor valido:\n");
    }

    printf("Digite outro valor:\n");
    while(scanf("%d", &valor2) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números inteiros
     while((c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
     printf("O valor informado nao eh um numero inteiro!\n");
     printf("Informe um valor valido:\n");
    }

    // Exibe ao usuário o menor valor inserido
    printf("Menor valor informado: %d\n", menor_numero(valor1, valor2)); // Retorna o menor número informado pelo usuário

    return 0;
}