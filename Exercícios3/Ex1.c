#include <stdio.h>

/*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/

int main(){

        float nota1,nota2,nota3,nota4,media;

            printf("Quais foram suas 4 notas?\n");
                scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);

        media = (nota1 + nota2 + nota3 + nota4)/4;

        if (media > 6.9)
            printf("Sua nota foi %.2f entao voce foi aprovado!!\n",media);
        else
            printf("Sua nota foi %.2f entao voce foi reprovado.\n",media);

                return 0;
        
}