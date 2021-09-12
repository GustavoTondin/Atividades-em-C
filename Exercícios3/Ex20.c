#include <stdio.h>

/*Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.*/

int main(){

        int idade;          /* Exercicio 5 feito com if/else */

            printf("Qual a idade do nadador?\n");
                scanf("%d",&idade);
        
        if (idade < 5)
            printf("Voce eh muito novo!");
        else
            if (idade <= 7)
                printf("Voce esta na categoria infantil!");
            else
                if (idade <= 10)
                    printf("Voce esta na categoria juvenil!");
                else
                    if (idade <= 15)
                        printf("Voce esta na categoria Adolescente!");
                    else
                        if (idade <= 30)
                            printf("Voce esta na categoria Adulto!");
                        else
                            printf("Voce esta na categoria Senior!");

                                return 0;

}