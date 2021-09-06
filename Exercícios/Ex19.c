#include <stdio.h>
//Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18 W
//de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
//a sua área (em m2) e a potência de iluminação que deverá ser utilizada.

int main(){
    
        float l,c,m,p;

            printf("Qual a Largura do seu quarto em metros?\n");
                scanf("%f",&l);
            printf("Qual o comprimento do seu quarto em metros?\n");
                scanf("%f",&c);

        m = l * c;
        p = m * 18;
            
            printf("O seu quarto tem '%f' metros quadrados.\n",m);
            printf("A potencia de iluminacao que devera ser utilizada eh:\n %f W",p);

                return 0;

}