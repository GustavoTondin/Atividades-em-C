#include <stdio.h>
//Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.

int main(){

    float lado1,lado2;

        printf("Qual o valor do primeiro lado do quadrado?:\n");
            scanf("%f",&lado1);
        printf("Qual o valor do segundo lado do quadrado?:\n");
            scanf("%f",&lado2);

    float at = (lado1 * lado2);

        printf("A area do desse quadrado eh:\n%f",at);

            return 0;

}