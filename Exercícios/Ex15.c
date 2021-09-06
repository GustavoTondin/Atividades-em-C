#include <stdio.h>
//João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar uma  
//multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de joão


int main(){

        float sal,salf,ju1,ju2,ca,cb;

            printf("Qual o seu salario?:\n");
                scanf("%f",&sal);
            printf("Qual o valor da primeira conta que voce tem que pagar?\n");
                scanf("%f",&ca);
            printf("Qual o valor da segunda conta que voce tem que pagar?\n");
                scanf("%f",&cb);

        ju1 = (ca) + (ca * 2/100);
        ju2 = (cb) + (cb * 2/100);
        salf = sal - (ju1 + ju2);

            printf("A quantia que restara do salariod e João eh:\n%f",salf);

                
                return 0;


}