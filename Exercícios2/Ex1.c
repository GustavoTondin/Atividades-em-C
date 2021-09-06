#include <stdio.h>

/* Conta telefônica - Uma conta telefônica é composta dos seguintes custos:
assinatura: R$ 17,90
impulsos: R$ 0,04 por impulso que exceder a 90 interurbanos
chamadas p/ celular: R$0,20 por impulso

Monte a fórmula para calcular o valor da conta para um valor informado pelo usuário de impulsos, R$34,29 de interurbanos e  um valor informado pelo usuário  de chamadas para celular. Elabore um programa que mostra os custos, calcula e mostra o valor total.*/

int main(){

        float assinatura = 17.90,interurbanos = 34.29,chamadas,valortotal;

            printf("Qual o valor das chamadas de celular?:\n");
                scanf("%f",&chamadas);

        valortotal = assinatura + interurbanos + chamadas;

            printf("O valor total eh:\n%f",valortotal);

    
        return 0;

}