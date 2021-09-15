#include <stdio.h>


/*Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.*/

int main(){

        float peso;
        int idade;

            printf("Qual a sua idade e o seu peso?\n");
                scanf("%d%*c %f%*c",&idade,&peso);

        if (idade < 20 && peso <= 60)
            printf("Voce esta no grupo de risco 9!");
        else if (idade < 20 && peso <= 90)
                printf("Voce esta no grupo de risco 8!");
        else if (idade < 20 && peso > 90)
                printf("Voce esta no grupo de risco 7!");
            else if (idade <= 50 && peso <= 60)
                    printf("Voce esta no grupo de risco 6!");
            else if (idade <= 50 && peso <= 90)
                    printf("Voce esta no grupo de risco 5!");
            else if (idade <= 50 && peso > 90)
                    printf("Voce esta no grupo de risco 4!");
                else if (idade > 50 && peso <= 60)
                        printf("Voce esta no grupo de risco 3!");
                else if (idade > 50 && peso <= 90)
                        printf("Voce esta no grupo de risco 2!");
                else if (idade > 50 && peso > 90)
                        printf("Voce esta no grupo de risco 1!");
         
                return 0;
}             