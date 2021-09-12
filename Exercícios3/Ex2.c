#include <stdio.h>

/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir: */

int main(){

    float nota1,nota2,media;

        printf("Quais foram as suas duas notas?\n");
            scanf("%f %f",&nota1,&nota2);

    media = (nota1 + nota2)/2;

        if (media < 3)
            printf("Sua nota foi %.2f e por isso foi reporvado!\n",media);
        else
            if (media > 3.00 && media < 7)
                printf("Sua nota foi %.2f e com essa nota voce tera que fazer um exame!\n",media);
            else
                printf("Como a sua nota foi %.2f voce foi aprovado!\n",media);

                    return 0;

}

