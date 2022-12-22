#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main(){

float A, b, h; 
A = (b*h)/2;

setlocale (LC_ALL, "portuguese");
 printf("Digite a altura do triângulo: \n"); 
    scanf("%.2f", &h); 
        printf("Digite a base do triângulo: \n");
            scanf("%.2f", &b);

printf("A área do triângulo é: %.2f", A);

return 0;
}
