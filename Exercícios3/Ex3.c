#include <stdio.h>

/*Faça um programa que receba dois números e mostre o menor.*/

int main(){

        int n1,n2;

            printf("Digite dois numeros inteiros!!\n");
                scanf("%d %d",&n1,&n2);

            if (n1 > n2)
                printf("O numero %d eh menor que o numero %d!",n2,n1);
            else
                printf("O numero %d eh menor que o numero %d!",n1,n2);

                    return 0;

}