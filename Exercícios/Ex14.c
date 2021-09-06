#include <stdio.h>
//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//a) a idade dessa pessoa em anos;
//b) a idade dessa pessoa em meses;
//c) a idade dessa pessoa em dias;
//d) a idade dessa pessoa em semanas.

int main(){

        int id,nasc,idm,idd,ids;
        int an;

            printf("Digite a seu ano de nascimento:\n");
                scanf("%d",&nasc);
            printf("Digite o ano atual:\n");
                scanf("%d",&an);

        id = (an) - (nasc);
        idm = id * 12;
        idd = id * 365;
        ids = id * 52;

            printf("Sua idade em anos eh:%d\n",id);
            printf("Sua idade em meses eh: %d\n",idm);
            printf("Sua idade em dias eh: %d\n",idd);
            printf("Sua idade em semanas eh: %d\n",ids);


            return 0;
}