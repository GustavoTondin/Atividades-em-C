#include <stdio.h>
/* Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
mostre:
    a) a hora digitada convertida em minutos;
    b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
    c) o total dos minutos convertidos em segundos.*/

int main(){

        int horas,minutos,horaconv,totalminutos,segundos;

            printf("Que horas sao?\n");
                scanf("%d",&horas);
            printf("Qual a hora em minutos?\n");
                scanf("%d",&minutos);

        horaconv = horas * 60;
        totalminutos = minutos + horaconv;
        segundos = totalminutos * 60;

            printf("a hora digitada convertida em minutos eh:\n%d\n",horaconv);
            printf("o total dos minutos eh:\n%d\n",totalminutos);
            printf("o total dos minutos convertidos em segundos eh:\n%d\n",segundos);
            
                return 0;

}