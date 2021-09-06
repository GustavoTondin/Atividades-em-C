#include <stdio.h>
//Faça um programa que receba o peso de uma pessoa, calcule e mostre:
//a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
//b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.

int main(){

    int p1;

        printf("Qual seu peso atual?:\n");
            scanf("%d",&p1);

    int pmais = (p1) +  (p1 * 15/100);
    int pmenos = (p1) - (p1 * 20/100);

        printf("Se voce engordar 15%% seu peso sera de:\n%d",pmais);
        printf("\nPorem se voce emagrecer 20%% seu peso sera de:\n%d",pmenos);

            return 0;

}
