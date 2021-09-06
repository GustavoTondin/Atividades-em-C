#include <stdio.h>

/*Otimização de corte - Reescreva o programa 6(corte de tábuas) para que leia o tamanho
de cada tábua e o comprimento de cada pedaço, e calcule a quantidade de pedaços e a sobra para cada tipo de tábua.*/

int main(){

        float div1,div2,div3,mod1,mod2,mod3;
        int tab1,tab2,tab3,madeira;

            printf("Qual o tamanho do corte da madeira em cm?\n");
                scanf("%d",&madeira);
            printf("Qual o tamanho da primeira tabua em cm?\n");
                scanf("%d",&tab1);
            printf("Qual a o tamanho da segunda tabua em cm?\n");
                scanf("%d",&tab2);
            printf("Qual o tamanho da terceira tabua em cm?\n");
                scanf("%d",&tab3);

        div1 = tab1 / madeira;
        mod1 = tab1 % madeira;
        div2 = tab2 / madeira;
        mod2 = tab2 % madeira;
        div3 = tab3 / madeira;
        mod3 = tab3 % madeira;
                
            printf("\nCom a primeira tabua voce tera %.2f pedacos e ira sobrar %.2f cm\n",div1,mod1);
            printf("Com a segunda tabua voce tera %.2f pedacos e ira sobrar %.2f cm\n",div2,mod2);
            printf("Com a terceira tabua voce tera %.2f pedacos e ira sobrar %.2f cm\n",div3,mod3);

                return 0;

}
