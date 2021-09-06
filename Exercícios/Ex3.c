#include <stdio.h>
//Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações.

int main(){

    int n1,n2;

        printf("Divite um numero:\n");
            scanf("%d",&n1);
        printf("Digite um segundo numero:\n");
            scanf("%d",&n2);

    int div = (n1/n2);

        printf("A divisao dos numeros eh:\n%d", div);

        return 0;

}