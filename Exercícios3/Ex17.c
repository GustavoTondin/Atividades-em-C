#include <stdio.h>

/*Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.*/

int main(){

        int senha;

            printf("Qual a senha?\n");
                scanf("%d%*c",&senha);
            
        if (senha == 4531)
            printf("Senha correta!\nAcesso concedido!");
        else
            printf("Senhe incorreta!\nAcesso negado.");

                return 0;

}