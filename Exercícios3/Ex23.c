#include <stdio.h>

/*Faça um programa que receba:
■■ o código do produto comprado; e
■■ a quantidade comprada do produto.
Calcule e mostre:
■■ o preço unitário do produto comprado, seguindo a Tabela I;
■■ o preço total da nota;
■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■■ o preço final da nota depois do desconto.*/

int main(){

        int cod,quantidade;
        float descont,total;

            printf("Qual o codido do produdo?\n");
                scanf("%d%*c",&cod);
            printf("Quantos desse protudo voce comprou?\n");
                scanf("%d%*c",&quantidade);

        if (cod < 11)
            printf("O valor unitairo do produto eh 10R$ entao o seu valor final sem desconto vai ser:\n%.2f",total = 10 * quantidade);
        else if (cod < 21)
            printf("O valor unitairo do produto eh 15R$ entao o seu valor final sem desconto vai ser:\n%.2f",total = 15 * quantidade);
        else if (cod < 31)
            printf("O valor unitairo do produto eh 20R$ entao o seu valor final sem desconto vai ser:\n%.2f",total = 20 * quantidade);
        else if (cod < 41)
            printf("O valor unitairo do produto eh 30R$ entao o seu valor final sem desconto vai ser:\n%.2f",total = 30 * quantidade);

        if (total <= 250)
            printf("\nVoce ganhou 5%% de desconto!! E com isso o preco da Sua nota final ficou:\n%.2f",(total) - (total * 0.05));
        else if (total <= 500)
            printf("\nVoce ganhou 10%% de desconto!! E com isso o preco da Sua nota final ficou:\n%.2f",(total) - (total * 0.10));
        else if (total > 500)
            printf("\nVoce ganhou 15%% de desconto!! E com isso o preco da Sua nota final ficou:\n%.2f",(total) - (total * 0.15));

                return 0;

}