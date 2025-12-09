/******************************************************************************

Descrição: Esse programa faz a conversão de um valor em polegadas para centímetros 
e exibe o seu valor usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara as variáveis para armazenar o valor em polegadas e o valor convertido em centímetros.
 float valorPolegadas, centimetros;
    
// Solicita ao usuário que digite o valor em polegadas, lê e atribui o valor informado.
 printf("Digite o valor em polegadas a ser convertido: ");
 scanf("%f", &valorPolegadas);
        
// Converte o valor de polegadas para centímetros (1 polegada = 2.54 cm).
 centimetros = valorPolegadas * 2.54;
    
// Exibe o resultado da conversão formatado com duas casas decimais. 
 printf("O valor é %.2f centímetros\n", centimetros);
 
// Obs: Alguns valores podem ser arredondados automaticamente pelo programa.
    
    return 0;
}