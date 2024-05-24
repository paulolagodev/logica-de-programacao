#include <stdio.h>
#include <math.h>

// Função que calcula a distância entre os pontos inseridos pelo usuário, a potência da distância entre os dois pontos e a raiz quadrada da potência.
float calculoDist( float x1, float x2, float y1, float y2){
    float A, B, pot, raiz;

    A = x1-x2;
    B = y1-y2;
    pot = (pow(A ,2)) + (pow(B, 2));
    raiz = sqrt(pot);

    return raiz;
}
int main(){
    float x1, x2, y1, y2;
    char c;
    

    // Solicita ao usuário 4 valores, sendo estes (x1,x2) e (y1,y2).
    printf("Distancia do ponto 1:\n");
    printf("Posicao x:\n");
    while (scanf("%f", &x1) != 1){ // Laço de repetição que restringe o usuário a digitar apenas números racionais
     while( (c = getchar()) != '\n'); //  Laço de repetição que evita o programa entrar em loop infinito ao receber uma string
        printf("O valor inserido nao eh racional! Tente outra vez\n");
        printf("Posicao x:\n");
    }

    printf("Posicao y:\n");
    while (scanf("%f", &x2) != 1){ 
     while( (c = getchar()) != '\n'); 
        printf("O valor inserido nao eh racional! Tente outra vez\n");
        printf("Posicao y:\n");
    }

    printf("Distancia do ponto 2:\n");
    printf("Posicao x:\n");
    while (scanf("%f", &y1) != 1){ 
     while( (c = getchar()) != '\n'); 
        printf("O valor inserido nao eh racional! Tente outra vez\n");
        printf("Posicao x:\n");
    }

    printf("Posicao y:\n");
    while (scanf("%f", &y2) != 1){ 
     while( (c = getchar()) != '\n'); 
        printf("O valor inserido nao eh racional! Tente outra vez\n");
        printf("Posicao y:\n");
    }

    // Exibe ao usuário a função da distância entre dois pontos e seus respectivos cálculos.
    printf("%.2f", calculoDist(x1, x2, y1, y2));

    return 0; 
}