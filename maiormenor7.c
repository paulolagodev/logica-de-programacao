#include <stdio.h>

int maior, menor;

void ler_Valor (int valor[10]){
    int i;

    for( i=0; i<10; i++){

        printf("Digite o valor %d\n", i+1);
        scanf("%d", &valor[i]);
    }
}
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