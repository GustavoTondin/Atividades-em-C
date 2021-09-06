#include <stdio.h>
#include <math.h>

//Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

int main(){

        float a,b,c;

            printf("Qual o valor do primeiro cateto do triangulo?:\n");
                scanf("%f",&a);
            printf("Qual o valor do segundo cateto do triangulo?:\n");
                scanf("%f",&b);

        c = sqrt((a * a) + (b * b));
        
            printf("A hipotenusa desse triangulo vale:\n%f",c);    

                return 0;

}