#include <stdio.h>

/*Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)

e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de re-
frigeração).

Calcule e mostre:
■■ O valor do aumento, usando as regras que se seguem.
■■ O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
■■ O novo preço, ou seja, o preço mais aumento menos imposto.
■■ A classificação, usando as regras a seguir.*/

int main(){

        float preco,aumento,final;
        int cod;
        char situacao;

            printf("Qual o preco do produto?\n");
                scanf("%f%*c",&preco);
            printf("Qual o codigo do produto? Digite: 1 para Limpeza, 2 para Alimentacao ou 3 para Vestuario\n");
                scanf("%d%*c",&cod);
            printf("Qual a situacao do produto? Digite a letra R para produtos que necessitam de refrigeracao e N para produto que nao precisa\n");
                scanf("%c%*c",&situacao);

        if (preco <= 25 && cod == 1)
            printf("O Aumento sera de:\n%.2f\n",aumento = (preco) + (preco * 0.05));
        else if (preco <= 25 && cod == 2)
            printf("O Aumento sera de:\n%.2f\n",aumento = (preco) + (preco * 0.08));
        else if (preco <= 25 && cod == 3)
            printf("O Aumento sera de:\n%.2f\n",aumento = (preco) + (preco * 0.10));
        else if (preco > 25 && cod == 1)
            printf("O Aumento sera de:\n%.2f\n",aumento = (preco) + (preco * 0.12));
        else if (preco > 25 && cod == 2)
            printf("O Aumento sera de:\n%.2f\n",aumento = (preco) + (preco * 0.15));
        else if (preco > 25 && cod == 3)
            printf("O Aumento sera de:\n%.2f\n",aumento = (preco) + (preco * 0.18));

        if (cod == 2 && situacao == 'R')
            printf("O Valor final descontando o imposto sera de:\n%.2f\n",final = (aumento) - (aumento * 0.05));
        else if (cod == 2)
            printf("O Valor final descontando o imposto sera de:\n%.2f\n",final = (aumento) - (aumento * 0.05));
        else if (situacao == 'R')
            printf("O Valor final descontando o imposto sera de:\n%.2f\n",final = (aumento) - (aumento * 0.05));
        else    
            printf("O Valor final descontando o imposto sera de:\n%.2f\n",final = (aumento) - (aumento * 0.08));

        if (final <= 50)
            printf("O preco esta Barato!");
        else if (final <= 120)
            printf("O preco final esta Normal!");
        else
            printf("O preco esta caro!");


                return 0; 

}