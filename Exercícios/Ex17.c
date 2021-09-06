#include <stdio.h>
//Faça um programa que receba o raio, calcule e mostre:
//a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
//b) a área de uma esfera; sabe-se que A = p R2
//c) o volume de uma esfera; sabe-se que V = 3⁄4 * p R3

int main(){

        float r,c,a,v;

            printf("Qual o raio da esfera?\n");
                scanf("%f",&r);

        c = 2 * 3.14 * r;
        a = 4 * 3.14 * (r * r);
        v = 4 * 3.14 * (r * r * r)/3; 

            printf("O comprimento dessa esfera eh:\n%f\n",c);
            printf("A area dessa esfera eh:\n%f\n",a);
            printf("O volume dessa esfera eh:\n%f\n",v);

                return 0;

}

