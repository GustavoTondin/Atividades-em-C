#include <stdio.h>
#include <math.h>

/*Comprimento de fio - Um eletricista precisa comprar fio que irá passar, pelo telhado, por toda a diagonal de uma casa de formato retangular. Como ele não tem condições de medir a diagonal com precisão (ou talvez não queira...), a solução alternativa que ele encontrou foi medir os lados da casa, sabendo que a diagonal pode ser calculada com base nos lados pelo
Teorema de Pitágoras (a2 = b2 + c2 ). Considerando que a casa mede 11,5 x 6,3 metros, faça um
programa que calcule a quantidade mínima necessária de fio a ser comprada, com precisão até centímetros.*/

int main(){

        float a,b = 11.5,c =6.3,cm;

        a = sqrt(b * b) + (c * c);
        cm = a * 100;

            printf("A quantidade necessario de fio sera:\n%.2f cm",cm);

                return 0;

}

