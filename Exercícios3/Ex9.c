#include <stdio.h>

/*Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.*/

int main(){

        float saldmedio;

            printf("Qual foi seu saldo medio no ultimo ano?\n");
                scanf("%f%*c",&saldmedio);

        if (saldmedio > 400)
            printf("Voce recebera: %.2f de saldo especial", (saldmedio) + (saldmedio * 30/100) );
        else
            if (saldmedio >= 300.01)
                printf("Voce recebera: %.2f de saldo especal", (saldmedio) + (saldmedio * 25/100) );
            else
                if (saldmedio >= 200.01)
                    printf("Voce recebera: %.2f de saldo especal", (saldmedio) + (saldmedio * 20/100) );
                else
                    printf("Voce recebera: %.2f de saldo especal", (saldmedio) + (saldmedio * 10/100) );

                        return 0;

}