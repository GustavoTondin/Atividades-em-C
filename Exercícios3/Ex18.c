#include <stdio.h>

/*Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.*/

int main(){

        int idade;

            printf("Qual a sua idade?\n");
                scanf("%d",&idade);

        if (idade >= 18)
            printf("Voce eh maior de idade!");
        else
            printf("Voce eh menor de idade!");

                return 0;

}