 /******************************************************************************

Descrição: Esse programa cria quatro variáveis de diferentes tipos,
atribui valores a elas e utiliza a função printf para exibi-los.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 16/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
    
// Declaração e atribuição de variáveis
 int numero_inteiro = 10;
 float numero_float = 3.14;
 double numero_double = 2.71467428;
 char caractere ='V';
    
// Exibição dos valores
        
 printf("Valor do inteiro (int) é: 10 \n");
        
 printf("Valor do ponto flutuante (float) é: 3.14\n");
 
 printf("Valor do ponto flutuante com dupla precisão (double) é: 2.71467428\n");

 printf("Valor do caractere (char): V\n");


    return 0;
}