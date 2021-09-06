#include <stdio.h>

/*Otimização de corte - Um marceneiro, para fazer um trabalho, precisa cortar vários pedaços de madeira de 45 cm cada um. Ele pode comprar tábuas de 3, 4 ou 5 metros. Usando os operadores div e mod, faça um programa que calcule a quantidade de pedaços e a sobra para cada tipo de tábua, permitindo assim uma melhor escolha do marceneiro.*/

int main(){

        float div1,div2,div3,mod1,mod2,mod3;
        int tab1 = 300,tab2 = 400,tab3 = 500,madeira = 45;

        div1 = tab1 / madeira;
        mod1 = tab1 % madeira;
        div2 = tab2 / madeira;
        mod2 = tab2 % madeira;
        div3 = tab3 / madeira;
        mod3 = tab3 % madeira;

            printf("Com uma tabua de 3 metros voce tera %.2f pedacos e ira sobrar %.2f cm\n",div1,mod1);
            printf("Com uma tabua de 4 metros voce tera %.2f pedacos e ira sobrar %.2f cm\n",div2,mod2);
            printf("Com uma tabua de 5 metros voce tera %.2f pedacos e ira sobrar %.2f cm\n",div3,mod3);

                return 0;
        
}
