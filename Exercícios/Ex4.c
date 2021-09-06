#include <stdio.h>
//Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.

int main(){

    int n1,n2,pes1,pes2;

        printf("Qual sua nota na primeira prova?:\n");
            scanf("%d",&n1);
        printf("Qual foi o peso da primeira prova?:\n");
            scanf("%d",&pes1);
        printf("Qual a sua nota na segunda prova?:\n");
            scanf("%d",&n2);
        printf("Qual era o peso da segunda prova?:\n");
            scanf("%d",&pes2);

    int medp = (n1 * pes1 + n2 * pes2) / (pes1 + pes2);

        printf("A sua media pondereda foi de:\n%d", medp);

        return 0;

}