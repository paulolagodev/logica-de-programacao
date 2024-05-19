#include <stdio.h>

// Função que lê os números informados e repete até que os valores inseridos pelo usuário sejam inteiros positivo
void lerNumeros(int num[]) {
    int i;

    printf("Insira cinco numeros inteiros positivo\n");
    for (i = 0; i < 5; i++) {
        do {
            printf("Numero %d :\n", i + 1);
            scanf("%d", &num[i]);
            if (num[i] <= 0) {
                printf("O numero inserido nao e positivo! Tente novamente.\n");
            }
        } while (num[i] <= 0);
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