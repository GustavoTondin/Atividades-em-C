#include <stdio.h>
//Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

int main(){
 
    int n1,n2,n3;

        printf("Coleque um numero:\n");
            scanf("%d",&n1);
        printf("Coloque um segundo numero:\n");
            scanf("%d",&n2);
        printf("Escolha um ultimo numero:\n");
            scanf("%d",&n3);

    int mult = (n1 * n2 * n3);

        printf("A multiplicacao dos numerais escolhidos eh:\n%d", mult);  
 
 
    return 0;


}