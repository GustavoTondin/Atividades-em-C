#include <stdio.h>

/*Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.*/

int main(){

        float preco;

            printf("Qual o valor do produto?\n");
                scanf("%f",&preco);

        if (preco <= 30)
            printf("O valor do protudo sera de:\n%.2f",preco);
        else
            if (preco <= 100)
                printf("O valor do protudo sera de:\n%.2f",(preco) - (preco * 0.1));
            else
                printf("O valor do protudo sera de:\n%.2f",(preco) - (preco * 0.15));

                    return 0;

}