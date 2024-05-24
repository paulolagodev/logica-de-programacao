#include <stdio.h>

// Função que lê os números informados e repete até que os valores inseridos pelo usuário sejam inteiros positivo
void lerNumeros(int num[]) {
    int i;
    char c;

    printf("Insira cinco numeros inteiros positivo\n");
    for (i = 0; i < 5; i++) {
        
      printf("Numero %d :\n", i + 1);
      while(scanf("%d", &num[i]) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números inteiros
      while((c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
      printf("O valor informado nao eh inteiro positivo! Tente outra vez.\n");
      printf("Numero %d :\n", i + 1);
      }
    } 
}

// Função que soma os divisores de cada número informado pelo usuário
int somaDivisores(int num){
    int soma = 0;
    int i;
    for( i=1; i<num; i++){
        if (num % i == 0){
            soma+= i;
        }
    }
    return soma;
}
int main(){

    // Definição da variável i e do tamanho dos vetores.
    int num[5];
    int soma[5];
    int i;

    lerNumeros(num);

    // Laço de repetição que calcula a soma dos divisores de cada número
    for( i=0; i<5; i++){
        soma[i] = somaDivisores(num[i]);
    }

    // Exibe o resultado
    for( i=0; i<5; i++){
        printf("A soma dos divisores de %d eh: %d\n", num[i], soma[i]);
    }
    
    return 0;
}