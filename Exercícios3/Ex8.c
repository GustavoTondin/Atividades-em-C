#include <stdio.h>

/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.*/

int main(){
      
        float salatual;

            printf("Qual o seu salario atual?\n");
                scanf("%f%*c",&salatual);
            
        if (salatual <= 300)
            printf("Seu salario vai aumentar para:\n%.2f",(salatual) + (salatual * 35/100));
        else
            printf("Seu salario vai almentar para:%.2f\n",(salatual) + (salatual * 15/100));

                return 0;

}

