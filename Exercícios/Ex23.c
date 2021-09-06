#include <stdio.h>
/*Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.*/

int main(){

        int angulo1,angulo2,angulo3;

            printf("Qual o valor do primeiro angulo do triangulo?\n");
                scanf("%d",&angulo1);
            printf("QUal o valor do segundo angulo?\n");
                scanf("%i",&angulo2);
            
        angulo3 = 180 - (angulo1 + angulo2);

            printf("O valor do terceiro angulo eh:\n%i",angulo3);

                return 0;

}