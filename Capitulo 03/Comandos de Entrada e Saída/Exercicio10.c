/******************************************************************************

Descrição: Esse programa lê 4 notas de um aluno, calcula a média entre elas e
exibe o seu resultado usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara as variáveis para armazenar quatro notas e a média final
 float primeiraNota, segundaNota, terceiraNota, quartaNota, media;

// Solicita ao usuário que digite a primeira nota, lê e atribui o valor informado.
 printf("Digite a primeira nota: ");
 scanf("%f", &primeiraNota);

// Solicita ao usuário que digite a segunda nota, lê e atribui o valor informado.
 printf("Digite a segunda nota: ");
 scanf("%f", &segundaNota);

// Solicita ao usuário que digite a terceira nota, lê e atribui o valor informado.
 printf("Digite a terceira nota: ");
 scanf("%f", &terceiraNota);

// Solicita ao usuário que digite a quarta nota, lê e atribui o valor informado.
 printf("Digite a quarta nota: ");
 scanf("%f", &quartaNota);

// Calcula a média aritmética das quatro notas.
 media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;

// Exibe a média com uma casa decimal.
 printf("O aluno tem uma média de %.1f pontos\n", media);
    
    return 0;
}