#include <stdio.h>
//Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
//e mostre a quantidade de salários mínimos que esse funcionário ganha.

int main(){

    float sal,salmin;

        printf("Qual o seu salario?:\n");
            scanf("%f",&sal);
        printf("Qual o salario minimo atual?:\n");
            scanf("%f",&salmin);
        
    float at = sal / salmin;

        printf("Voce ganha:\n%f salarios minimos",at);


            return 0;
}