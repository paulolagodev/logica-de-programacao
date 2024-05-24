#include <stdio.h>

// Função que imprime a tabuada de acordo com o numero informado pelo usuário
void imprimirtabuada (int numero){
    int i;
    
    for( i=1; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main(){
    int numero;
    char c;

    printf("Informe um numero de 1 a 9:\n");

    // Loop infinito 
    while(1){
        if( scanf("%d", &numero) == 1 && numero >= 1 && numero <=9){
            break;
        } else {
            //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
            while (( c = getchar()) != '\n'); 
            printf("O valor informado nao eh um numero inteiro ou nao esta entre 1 e 9.\n");
            printf("Informe um valor valido:\n");
        }
    }
    imprimirtabuada(numero);

    return 0;
}