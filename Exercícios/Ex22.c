#include <stdio.h>
/*Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do
polígono.*/

int main(){

        int N,ND;

            printf("Quantos lados tem o poligono convexo?\n");
                scanf("%d",&N);
            
        ND = N * (N - 3)/2;

            printf("O numero de diagonois desse poligone eh:\n%d",ND);

                return 0;

}