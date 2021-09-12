#include <stdio.h>

/*Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.*/

int main(){

        float sal;

            printf("Qual o seu salario?\n");
                scanf("%f",&sal);

        if (sal <= 300)
            printf("O Seu salario sera:\n%.2f",(sal) + (sal * 0.5));
        else
            if (sal <= 500)
                printf("O Seu salario sera:\n%.2f",(sal) + (sal * 0.4));
            else
                if (sal <= 700)
                    printf("O Seu salario sera:\n%.2f",(sal) + (sal * 0.3));
                else
                    if (sal <= 800)
                        printf("O Seu salario sera:\n%.2f",(sal) + (sal * 0.2));
                    else
                        if (sal <= 1000)
                            printf("O Seu salario sera:\n%.2f",(sal) + (sal * 0.1));
                        else
                            printf("O Seu salario sera:\n%.2f",(sal) + (sal * 0.05));

                                return 0;

}