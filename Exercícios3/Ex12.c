#include <stdio.h>

/*Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e des-
contado o imposto de 7% sobre o salário.*/

int main(){

        float salatual;

            printf("Qual o seu salario atual?\n");
                scanf("%f%*c",&salatual);

        if (salatual <= 350)
            printf("O salario que voce ira receber sera:\n%.2f",(salatual) - (salatual * 0.07) + (100));
        else
            if (salatual < 601)
                printf("O salario que voce ira receber sera:\n%.2f",(salatual) - (salatual * 0.07) + (75));
            else   
                if (salatual <= 900)
                    printf("O salario que voce ira receber sera:\n%.2f",(salatual) - (salatual * 0.07) + (50));
                else
                    printf("O salario que voce ira receber sera:\n%.2f",(salatual) - (salatual * 0.07) + (35));

                        return 0;

}