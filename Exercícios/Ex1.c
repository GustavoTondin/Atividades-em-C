#include <stdio.h>
#include <locale.h>
//Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.

int main(){

   int n1, n2;

      printf("Divite um numero:\n");
         scanf("%d",&n1);
      printf("Ditegite outro numero:\n");
         scanf("%d",&n2);

   int sub = (n1 - n2);

      printf("A subtracao desses dois numeros eh:\n %d",sub);


         return 0;
 
}