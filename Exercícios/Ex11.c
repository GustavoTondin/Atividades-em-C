#include <stdio.h> 
//Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2.

int main(){

    float digma,digme;

        printf("Qual a diagonal maior do losango?:\n");
            scanf("%f",&digma);
        printf("Qual a diagonal menor do losango?:\n");
            scanf("%f",&digme);
        
    float at = (digma * digme)/2;

        printf("A area do losango eh:\n%f",at);

            return 0;


}
