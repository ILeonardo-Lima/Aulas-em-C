/******************************************************************************

Descrição: Esse programa lê dois valores, faz operações de multiplicação, soma,
subtração e divição entre esses valores, e exibe o resultado de cada operação
usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara duas variáveis inteiras para armazenar os números informados pelo usuário.
 int primeiroNumero, segundoNumero;
    
// Solicita ao usuário que digite o primeiro número, lê e atribui o valor informado.
 printf("Digite o primeiro número: ");
 scanf("%d", &primeiroNumero);
        
// Solicita ao usuário que digite o segundo número, lê e atribui o valor informado.
 printf("Digite o segundo número: ");
 scanf("%d", &segundoNumero);
    
// Exibe o resultado da multiplicação dos dois números
 printf("O valor da multiplicação é: %d\n", primeiroNumero * segundoNumero);
    
// Exibe o resultado da soma dos dois números
 printf("O valor da soma é: %d\n", primeiroNumero + segundoNumero);
    
// Exibe o resultado da subtração (primeiro menos o segundo)
 printf("O valor da subtração é: %d\n", primeiroNumero - segundoNumero);
    
// Exibe o resultado da divisão inteira
 printf("O valor da divisão é: %d\n", primeiroNumero / segundoNumero);
 
/*OBS: se 'segundoNumero' for zero, haverá erro na execução
e como as variáveis são int, o resultado da divisão será inteiro (sem decimais).*/

    return 0;
}