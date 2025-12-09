/******************************************************************************

Descrição: Esse programa calcula a área de um quadrado sabendo apenas um lado informado
e exibe o seu valor usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara as variáveis para armazenar o valor do lado e a área do quadrado.
 float valorlado, area;
    
// Solicita ao usuário que digite o valor do lado do quadrado, lê e atribui o valor informado.
 printf("Digite o valor do lado do quadrado: ");
 scanf("%f", &valorlado);
        
// Calcula a área do quadrado (lado * lado).
 area = valorlado * valorlado;
    
// Exibe o valor da área formatado com duas casas decimais.
 printf("O valor da área do seu quadrado é: %.2f\n", area);
    
    return 0;
}