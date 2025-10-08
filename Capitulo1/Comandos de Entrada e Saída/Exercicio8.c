/******************************************************************************

Descrição: Esse programa converte a idade de anos de vida para dias de vida e 
exibe o resultado usando a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 19/09/2025

*******************************************************************************/

#include <stdio.h>
int main()
{
    
// Declara as variáveis para armazenar a idade em anos e em dias.
 int idadeAnos, idadeDias;
    
// Solicita ao usuário que digite sua idade em anos, lê e atribui o valor informado.
 printf("Digite quantos anos você possui: ");
 scanf("%d", &idadeAnos);
        
// Calcula a idade em dias (considerando 365 dias por ano).
 idadeDias = idadeAnos * 365;
    
// Exibe o resultado final na tela.
 printf("Você já viveu %d dias de vida.", idadeDias);
    
    return 0;
}