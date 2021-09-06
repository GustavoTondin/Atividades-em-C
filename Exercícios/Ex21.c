#include <stdio.h>
/* Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
    a) a hora trabalhada vale 1/8 do salário mínimo;
    b) a hora extra vale 1/4 do salário mínimo;
    c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
    d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
    e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.*/

int main(){

        float hrstrab,salmin,hrsex,salbruto,total;

            printf("Qual a quantidade de horas que voce trabalhou?\n");
                scanf("%f",&hrstrab);
            printf("Qual o salario minimo?\n");
                scanf("%f",&salmin);
            printf("Qual a quantidade de horas extras realizadas?\n");
                scanf("%f",&hrsex);
            
        
        hrsex = hrsex * (salmin / 4);
        salbruto = hrstrab * (salmin / 8);
        total = salbruto + hrsex;

            printf("Voce vai recer:\n%f",total);

                return 0;

}