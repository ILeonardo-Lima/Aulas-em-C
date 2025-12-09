/******************************************************************************

Descrição: Esse programa programa declara uma variável global, uma variável local e atribui
valor para ambas dentro da função main, depois os valores atribuídos a elas.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 16/09/2025

*******************************************************************************/
#include <stdio.h>

//Declação da variável global.
 int idade;

int main()
{

// Declação da variável local.
 float valorPI;

// Atribuição de valor a variável global.
 idade = 27;

// Atribuição de valor a variável local.
 valorPI = 3.14;

  // Exibição da variável global.
    printf("O valor da variável global idade é: 27\n");
    
  // Exibição da variável local.
    printf("O valor da variável local valorPI é: 3.14");


    return 0;
}