#include <stdio.h>

int maior, menor;

// Função que lê a entrada do usuário e verifica se é numero inteiro.
void ler_Valor (int valor[10]){ 
    int i;
    char c;

    printf("INFORME APENAS NUMEROS INTEIROS\n");

    for( i=0; i<10; i++){

        printf("Digite o valor %d:\n", i+1);
        while ( scanf("%d", &valor[i]) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números inteiros
            while ( ( c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
            printf("O valor inserido nao eh inteiro! Tente outra vez.\n");
             printf("Digite o valor %d:\n", i+1);
        }
       
    }
}

// Função que busca o maior e menor valor informado pelo usuário
void buscar_Maior_Menor_Valor (int valor[10]){
    int i;
    maior = valor[0];
    menor = valor[0];

    for( i=1; i<10; i++){
        if( valor[i] > maior ){
            maior = valor[i];
        }
        if( valor[i] < menor ){
            menor = valor[i];
        }
    }
}

// Função que exibe o maior e menor valor informado pelo usuário 
void exibir_Maior_Menor_Valor (){

    printf("O maior valor informado eh: %d\n", maior);
    printf("O menor valor informado eh: %d\n", menor);
}

int main(){

    int valor[10];

    ler_Valor(valor);
    buscar_Maior_Menor_Valor(valor);
    exibir_Maior_Menor_Valor();

    return 0;
}