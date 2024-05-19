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

    // Solicita ao usuário 4 valores, sendo estes (x1,x2) e (y1,y2).
    printf("Distancia do ponto 1:\n");
    printf("Posicao x:\n");
    scanf("%f", &x1);
    printf("Posicao y:\n");
    scanf("%f", &x2);
    printf("Distancia do ponto 2:\n");
    printf("Posicao x:\n");
    scanf("%f", &y1);
    printf("Posicao y:\n");
    scanf("%f", &y2);

    // Exibe ao usuário a função da distância entre dois pontos e seus respectivos cálculos.
    printf("%.2f", calculoDist(x1, x2, y1, y2));

    return 0; 
}