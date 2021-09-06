#include <stdio.h>
//Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
//Exemplo:
//Digite um número: 5
//5 × 0 = 0           5 × 5 = 25          5 × 10 = 50
//5 × 1 = 5           5 × 6 = 30
//5 × 2 = 10          5 × 7 = 35
//5 × 3 = 15          5 x 8 = 40
//5 × 4 = 20          5 × 9 = 45

int main(){

    int n,nu;

        printf("Digite um numero:\n");
            scanf("%d",&n);


    for(nu = 0; nu<=10;nu++)

        printf("%d x %d = %d\n ",n,nu,n*nu);


        return 0;

}