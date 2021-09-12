#include <stdio.h>

/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.*/

int main(){

        float custo;

            printf("Qual o custo de fabrica do carro?\n");
                scanf("%f",&custo);

        if (custo <= 12000)
            printf("O preco sera de:\n %.2f", (custo) + (custo * 5/100) );
        else
            if (custo <= 25000)
                printf("O preco sera de:\n %.2f", (custo) + (custo * 10/100) + (custo * 15/100) );
            else
                printf("O preco sera de:\n %.2f", (custo) + (custo * 15/100) + (custo * 20/100) ); 

                    return 0;

}