#include <stdio.h>

/*Conversão cm/pol 1 - Faça um programa que mostra 10 linhas de uma tabela de conversão
centímetro/polegada, a partir de um valor lido e variando de 10 em 10 centímetros (uma polegada
equivale a 2,54 centímetros).*/

int main(){

        float cm,pl = 2.54;
        float conv,conv2,conv3,conv4,conv5,conv6,conv7,conv8,conv9,conv10;

            printf("Qual o valor em centimetros que deseja converter?\n");
                scanf("%f",&cm);

        conv = cm * pl;
        conv2 = (cm + 10) * pl; 
        conv3 = (cm + 20) * pl;
        conv4 = (cm + 30) * pl;
        conv5 = (cm + 40) * pl;
        conv6 = (cm + 50) * pl;
        conv7 = (cm + 60) * pl;
        conv8 = (cm + 70) * pl;
        conv9 = (cm + 80) * pl;
        conv10 = (cm + 90) * pl;

            printf("\n%.2f * %.2f = %.2f\n",cm,pl,conv);
            printf("%.2f * %.2f = %.2f\n",cm + 10,pl,conv2);
            printf("%.2f * %.2f = %.2f\n",cm + 20,pl,conv3);
            printf("%.2f * %.2f = %.2f\n",cm + 30,pl,conv4);
            printf("%.2f * %.2f = %.2f\n",cm + 40,pl,conv5);
            printf("%.2f * %.2f = %.2f\n",cm + 50,pl,conv6);
            printf("%.2f * %.2f = %.2f\n",cm + 60,pl,conv7);           
            printf("%.2f * %.2f = %.2f\n",cm + 70,pl,conv8);
            printf("%.2f * %.2f = %.2f\n",cm + 80,pl,conv9);
            printf("%.2f * %.2f = %.2f\n",cm + 90,pl,conv10);

                return 0;    

}