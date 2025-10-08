/******************************************************************************

Descrição: Esse programa solicita um valor ao usuário, lê o valor, calcula o quadrado
desse valor e imprime o resultado desse calculo usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara as variáveis para armazenar o número digitado e o quadrado.
int numero, quadrado;
    
// Solicita ao usuário que digite um valor, lê e atribui o valor informado.
 printf("Digite o valor que deseja saber seu quadrado: ");
 scanf("%d", &numero);
        
// Calcula o quadrado do número digitado (numero multiplicado por ele mesmo).
 quadrado = numero * numero;
    
// Exibe o resultado na tela.
 printf("O quadrado do número %d é: %d\n", numero, quadrado);
    
    return 0;
}