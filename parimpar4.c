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
    char c;
    
    printf("Digite um valor inteiro:\n"); // Solicita ao usuário um valor inteiro
    while(scanf("%d", &valor) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números inteiros
     while((c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
      printf("O valor informado nao eh inteiro! Tente outra vez.\n");
      printf("Informe um valor valido:\n");
    }
      printf("%d", impar(valor));

    return 0;
}