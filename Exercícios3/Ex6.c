#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.*/

int main(){

        float n1,n2;
        int escolha;

            printf("Digite dois numeros:\n");
                scanf("%f%*c %f%*c",&n1,&n2);
            printf(" Escolha uma acao:\n 1) O primeiro numero elevado ao segundo numero.\n 2) Raiz quadrada de cada um dos numeros.\n 3) Raiz cubica de cada um dos numeros.\n");
                scanf("%d%*c",&escolha);

            switch (escolha)
            {
                case 1 :
                    printf("O valor do primeiro numero elevado pelo segundo eh:%.2f", pow(n1,n2));
                    break;
                case 2 :
                    printf("A Raiz quadrada de cada um dos numeros eh:\n%.2f\n%.2f",sqrt(n1),sqrt(n2));
                    break;
                case 3 :
                    printf("A raiz cubica de cada um dos numeros eh:\n%.2f\n%.2f",pow(n1,3),pow(n2,3));
                    break;
                default:
                    printf("Ocorreu um erro");
           }
                return 0;

}