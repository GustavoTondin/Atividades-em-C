#include <stdio.h>

/*Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas

extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela con-
sulta à tabela que se segue, na qual:

H = número de horas extras – (2/3 * (número de horas falta))*/

int main(){

        float H,extra,faltas;

            printf("Quantas horas extras voce fez?\n");
                scanf("%f%*c",&extra);
            printf("Quantas horas voce faltou?\n");
                scanf("%f%*c",&faltas);
            
        H = (extra - (2/3 * (faltas))) * 60;

        if (H < 600)
            printf("Voce ira receber 100R$ de premio!!");
        else if (H < 1199)
            printf("Voce ira receber 200R$ de premio!!");
        else if (H < 1799)
            printf("Voce ira receber 300R$ de premio!!");    
        else if (H < 2399)
            printf("Voce ira receber 400R$ de premio!!");
        else    
            printf("Voce ira receber 500R$ de premio!!");

                return 0;

}