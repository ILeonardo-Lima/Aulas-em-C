/******************************************************************************

Descrição: Esse programa solicita ao usuário quantos quilos de latão ele quer
produzir e imprime quantos quilos de cobre e zinco são necessários para tal.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
// Declara as variáveis que irão armazenar:
// latao = quantidade total de latão desejada.
// cobre = quantidade de cobre necessária.
// zinco = quantidade de zinco necessária.
 float latao, cobre, zinco;

// Solicita ao usuário a quantidade (em Kg) de latão a ser produzida, lê e atribui o valor informado.
 printf("Informe quantos Kg de latão quer produzir: ");
 scanf("%f", &latao);

// Calcula a quantidade de cobre necessária (70% do valor total de latão).
 cobre = latao * 7.0 / 10.0;

// Calcula a quantidade de zinco necessária (30% do valor total de latão).
 zinco = latao * 3.0 / 10.0;

// Exibe o resultado na tela.
 printf("Para produzir %.2f Kg de latão, serão necessários %.2f Kg de cobre e %.2f Kg de zinco.\n", latao, cobre, zinco);
 

    return 0;
}