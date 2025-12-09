/******************************************************************************

Descrição: Esse programa faz a conversão de um valor em KG para gramas 
e exibe o seu valor usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara a variável que irá armazenar o valor em quilogramas.
 float valorEmkg;
    
// Solicita que o usuário digite o valor em Kg, lê e atribui o valor informado.
 printf("Digite o valor em KG: ");
 scanf("%f", &valorEmkg);
    
// Calcula a conversão e exibe o valor em gramas.
 printf("O valor em gramas é: %.2f g", valorEmkg * 1000.0);
    
    return 0;
}