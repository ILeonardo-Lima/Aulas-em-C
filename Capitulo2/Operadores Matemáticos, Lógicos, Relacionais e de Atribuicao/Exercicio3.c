/******************************************************************************
Descrição: O programa lê um valor de peso em gramas, converte para quilos e calcula o 
preço a pagar considerando R$ 45,90 por quilo e depois exibe o resultado  na tela.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
    
// Declara as variáveis:
 float gramas, quilo, preco;
    
// Solicita ao usuário que informe o peso em gramas, lê e atribui o valor informado.
 printf("Informe o valor pesado em gramas: ");
 scanf("%f", &gramas);
    
// Converte o peso informado em gramas para quilogramas.
 quilo = gramas / 1000.0;
    
// Calcula o preço final multiplicando o peso em kg pelo preço do kg (R$ 45,90).
 preco = quilo * 45.90;
    
// Exibe o valor a ser pago com duas casas decimais.
 printf("O valor a pagar é R$ %.2f", preco);
    
    return 0;
}