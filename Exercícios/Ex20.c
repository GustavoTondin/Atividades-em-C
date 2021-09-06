#include <stdio.h>
#include <math.h>
/*Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta.*/

int main(){

        float angulo, distancia,hipotenusa; 

            printf("Qual o angulo da escada?\n");
                scanf("%f",&angulo);
            printf("Qual a distancia que a escada esta da parede?\n");
                scanf("%f",&distancia);

        hipotenusa = distancia / cos(angulo);

            if (hipotenusa < 0)
            {
                hipotenusa = hipotenusa * (-1);
            }
            
            printf("A medida da escada eh\n %f",hipotenusa);

                return 0;

}