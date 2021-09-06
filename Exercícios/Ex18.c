#include <stdio.h>
//Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
//Fahrenheit. Sabe-se que F = 180*(C + 32)/100.

int main(){

        float c,f;

            printf("Qual a temperatura atual em Celsius?\n");
                scanf("%f",&c);
            
        f = (c * 9/5) + 32;

            printf("A temperatura atual em Fahrenheit eh:\n%f",f);

                return 0;

}