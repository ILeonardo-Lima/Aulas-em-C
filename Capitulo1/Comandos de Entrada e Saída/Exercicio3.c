/******************************************************************************

Descrição: Esse programa lê três números, realiza a soma entre eles e exibe 
o resultado da operação usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/
#include <stdio.h> 

int main() 
{
    
// Declara quatro variáveis inteiras: três para os números digitados e uma para a soma
 int primeiroNumero, segundoNumero, terceiroNumero, soma; 

// Pede que o usuário digite o primeiro número, lê e atribui o valor informado.
 printf("Digite o prímeiro número: ");  
 scanf ("%d", &primeiroNumero);  
    
// Pede que o usuário digite o segundo número, lê e atribui o valor informado.
 printf("Digite o segundo número: ");  
 scanf ("%d", &segundoNumero);  

// Pede que o usuário digite o terceiro número, lê e atribui o valor informado.
 printf("Digite o terceiro número: ");  
 scanf ("%d", &terceiroNumero);  

// Faz a soma dos três números e guarda o resultado na variável "soma"
 soma = primeiroNumero + segundoNumero + terceiroNumero;  

// Exibe o valor da soma na tela
 printf("O valor da soma é = %d\n", soma);  

    return 0;  
}