#include <stdio.h>
/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las.*/

int main(){

        float real,dollar,libra,marco;
        
            printf("Quanto dinheiro voce tem em reais?\n");
                scanf("%f",&real);
            
        dollar = real * 1.80;
        marco = real * 2;
        libra = real * 3.57;

            printf("O valor convertido em para dollar, marco alemão e libras sera respectivamente \n %f %f %f",dollar,marco,libra);

                return 0;

}