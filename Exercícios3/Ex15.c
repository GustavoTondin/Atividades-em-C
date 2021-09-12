#include <stdio.h>

/*Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.*/

int main(){

        float valor;
        int op;

            printf("Qual o valor que voce deseja investir?\n");
                scanf("%f",&valor);
            printf("Qual opcao de investimento voce deseja?\n 1) Poupanca\n 2) Fundos de renda fixa.\n");
                scanf("%d",&op);

            switch (op)
            {
                case 1 :
                    printf("O valor apos um mes de investimento sera de:\n%.2f.",(valor) + (valor * 0.03));
                break;
                case 2 :
                    printf("O valor apos um mes de investimento sera de:\n%.2f.",(valor) + (valor * 0.04));
                break;
                default:
                    printf("Voce nao escolheu uma opcao de investimento!!"); 
            }
                return 0;

}