#include <stdio.h>

/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.*/

int main(){

        float salatual;

            printf("Qual o seu salario atual?\n");
                scanf("%f",&salatual);

        if ( salatual < 301 )
            printf("Seu novo salario vai ser:\n%.2f",(salatual) + (salatual * 0.15));
        else
            if (salatual < 600)
                printf("Seu novo salario vai ser:\n%.2f",(salatual) + (salatual * 0.10));
            else
                if (salatual < 901)
                    printf("Seu novo salario sera:\n%.2f",(salatual) + (salatual * 0.05));
                else 
                    printf("Seu novo salario sera de:\n%.2f",salatual);

                        return 0;

}