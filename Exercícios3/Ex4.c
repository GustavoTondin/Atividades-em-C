#include <stdio.h>

/*Faça um programa que receba três números e mostre o maior.*/

int main(){

        int n1,n2,n3;

            printf("Digite tres numeros inteiros!!\n");
                scanf("%d %d %d",&n1,&n2,&n3);

            if (n1 > n2 && n1 > n3)
                printf("O numero %d eh o maior dos tres!",n1);
            else
                if (n2 > n1 && n2 > n3)
                    printf("O numero %d eh o maior",n2);
                else
                    printf("O numero %d eh o maior",n3);

                        return 0;

}