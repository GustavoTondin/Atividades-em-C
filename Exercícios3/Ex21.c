#include <stdio.h>

/*Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.*/

int main(){

        float preco;
        int op;

            printf("Qual o preco do produto e o codigo de origem do produto?\n");
                scanf("%f%*c %d%*c",&preco,&op);

        if (op == 1)
            printf("O produto com o valor de %.2f tem procedencia do SUL",preco);
        else
            if (op == 2)
                printf("O produto com o valor de %.2f tem procedencia do NORTE",preco);
            else
                if (op == 3)
                    printf("O produto com o valor de %.2f tem procedencia do LESTE",preco);
                else
                    if (op == 4)
                        printf("O produto com o valor de %.2f tem procedencia do OESTE",preco);
                    else
                        if (preco < 7)
                            printf("O produto com o valor de %.2f tem procedencia do NORDESTE",preco);
                        else
                            if (preco < 10)
                                printf("O produto com o valor de %.2f tem procedencia do SUDESTE",preco);
                            else
                                if (preco < 21)
                                    printf("O produto com o valor de %.2f tem procedencia do CENTRO-OESTE",preco);
                                else
                                    if (preco < 31)
                                        printf("O produto com o valor de %.2f tem procedencia do NORDESTE",preco);
                
                            return 0;


}