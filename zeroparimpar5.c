#include <stdio.h>

int pnz (int N){ // Função que verifica se o numero informado é positivo, negativo ou zero.

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
    char c;

   
    printf("Insira um valor inteiro:\n");  // Solicita ao usuário um valor inteiro
    while(scanf("%d", &valor) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números inteiros
     while((c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
     printf("O valor informado nao eh um numero inteiro!\n");
     printf("Informe um valor valido:\n");
    }

    printf("%d", pnz(valor));

    return 0;
}