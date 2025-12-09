/******************************************************************************

Descrição: Esse programa faz a leitura de dois valores e exibe o resultado do
seu produto utilizando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{

// Declaração das variáveis
 int primeiroNumero, segundoNumero;

// Solicita ao usuário o primeiro valor, lê e atribui o valor informado.
 printf("Digite o prímeiro número: ");
 scanf ("%d", &primeiroNumero);
    
// Solicita ao usuário o segundo valor, lê e atribui o valor informado.    
 printf("Digite o segundo número: ");    
 scanf ("%d", &segundoNumero);

// Exibe uma mensangem retornando o resultado do produto dos dois números informados.        
 printf("O produto dos números informados é : %d\n", primeiroNumero * segundoNumero);
    
    return 0;
}