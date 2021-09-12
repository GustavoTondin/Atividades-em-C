#include <stdio.h>

/*Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-
guir, o novo preço e a classificação.*/

int main(){

        float preco;

            printf("Qual o preco do produto?\n");
                scanf("%f",&preco);

        if (preco <= 50)
            printf("O valor sera de:\n%.2f.",preco = (preco) + (preco * 0.05));
        else    
            if (preco <= 100)
                 printf("O valor sera de:\n%.2f.",preco = (preco) + (preco * 0.1));
            else
                printf("O valor sera de:\n%.2f.",preco = (preco) + (preco * 0.15));


        if (preco <= 80)
            printf("\nO produto eh Barato!!");
        else
            if(preco <=120)
                printf("\nO produto eh Normal!!");
            else
                if (preco <= 200)
                    printf("\nO produto eh Caro!!");
                else
                    printf("\nO produto eh Muito Caro!!");   

                        return 0;

}