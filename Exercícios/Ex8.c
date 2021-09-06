#include <stdio.h>
//Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

int main (){

    float peso;

        printf("Qual o seu peso?:\n");
            scanf("%f",&peso);
    
    float pesg = (peso * 1000);

        printf("Seu peso atual em gramas eh:\n%f",pesg);

            return 0;


}