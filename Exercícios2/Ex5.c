#include <stdio.h>
#include <math.h>

/*Comprimento de fio - Altere o programa do eletricista (4) para que as medidas sejam
lidas do teclado e o resultado expresso em metros.*/

int main(){

        float a,b,c;

            printf("Qual a primeira medida da casa?\n");
                scanf("%f",&b);
            printf("Qual a segunda medida da casa?\n");
                scanf("%f",&c);

        a = sqrt(b * b) + (c * c);

            printf("A quantidade de fio necessaria em metros sera:\n%.2f m",a);

                return 0;

}

