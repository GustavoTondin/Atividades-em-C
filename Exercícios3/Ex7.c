#include <stdio.h>

/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/

int main(){

        float salatual;

            printf("Qual o seu salario atual?\n");
                scanf("%f",&salatual);
            
        if (salatual < 500)
            printf("O Seu salario vai aumentar para:%.2f\n",(salatual) + (salatual * 30/100));
        else
            printf("Voce nao vai receber um reajuste de salario");

                return 0;
}