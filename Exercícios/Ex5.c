#include <stdio.h>
//Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

int main(){

    int v1;

        printf("A valor do produto eh:\n");
            scanf("%d",&v1);
        
    int des = (v1) - (v1 * 10 / 100);

        printf("O produto com desconto de 10%% fica por:\n%d",des);

        
        return 0;

}