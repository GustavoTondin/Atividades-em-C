#include <stdio.h>

/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.

EsCoLhA do usuári o oPErAção
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.*/

int main(){

        float n1,n2;
        float op;
        

            printf("Digite dois numeros inteiros\n");
                scanf("%f%*c %f%*c",&n1,&n2);
            printf("Escolha umas das operacoes para o programa realizar:\n");
            printf(" 1 para Media entre os numeros digitados\n 2 para Diferenca do maior pelo menor\n 3 para Produto entre os numeros digitados\n 4 para Divisao do primeiro pelo segundo\n");
                scanf("%f%*c",&op);

            if (op == 1)
                printf("A media dos numeros eh:%.2f",op = (n1 + n2)/2);
            else
                if(op == 2 && n1 > n2)
                    printf("A diferenca do maior pro menor eh:%.2f",op = (n1 - n2));
                else
                    if (op == 2 && n2 > n1)
                        printf("A diferenca do maior pro menor eh:%.2f",op = (n2 - n1));
                    else
                        if (op == 3)
                            printf("Produto entro os dois nuemeros digitados eh:%.2f", op = (n1 * n2));
                        else
                            if (op == 4)
                                printf("Divisao do primeiro pelo segundo eh:%.2f",op = (n1/n2));
                            else
                                printf("Ocorreu um erro");

                                    return 0;
}