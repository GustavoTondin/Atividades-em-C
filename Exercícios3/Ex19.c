#include <stdio.h>

/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizan-
do as seguintes fórmulas (onde h é a altura):
 para homens: (72.7 * h) – 58.
 para mulheres: (62.1 * h) – 44.7.*/

 int main(){

        float altura,pesoideal;
        int sexo;

            printf("Qual a sua altura?\n");
                scanf("%f",&altura);
            printf("Diga qual seu sexo:\n1) Homem\n2)Mulher\n");
                scanf("%d",&sexo);

        switch(sexo)
        {
            case 1 :
                printf("Seu peso ideal eh:\n%.2f",pesoideal = (72.7 * altura) - (58));
            break;
            case 2 :
                printf("Seu peso ideal eh:\n%.2f",pesoideal = (62.1 * altura) - (44.7));
            break;
            default:
                printf("Voce nao escolheu seu sexo!");
            
        }
                    return 0;

 }