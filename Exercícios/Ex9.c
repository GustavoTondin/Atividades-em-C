#include <stdio.h>
//Faça um programa que calcule e mostre a área de um trapézio.
//Sabe-se que: A = ((base maior + base menor) * altura)/2

int main(){

    float basema,baseme,alt;

        printf("Qual a base maior do trapezio:\n");
            scanf("%f",&basema);
        printf("Qual a base menor do trapezio?:\n");
            scanf("%f",&baseme);
        printf("Qual a altura do trapezio?:\n");
            scanf("%f",&alt);

    float area = ((basema + baseme) * alt)/2;

        printf("A area do trapezio eh:\n%f",area);


            return 0;



}