#include <stdio.h>
//Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.

int main(){

    int sal, comi;

        printf("Qual o seu salario?:\n");
            scanf("%d",&sal);
        printf("Qual o valor de suas vendas nesse mes?:\n");
            scanf("%d",&comi);

    int salf = (sal) + (comi * 0.04);

        printf("Seu salario final nesse mes sera de:\n%d",salf);

    
        return 0;


}