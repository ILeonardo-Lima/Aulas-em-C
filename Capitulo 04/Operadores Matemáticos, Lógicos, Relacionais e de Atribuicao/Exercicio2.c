/******************************************************************************

Descrição: Este programa solicita ao usuário que informe um dia e um mês do ano e, 
em seguida, calcula quantos dias já se passaram desde o início do ano até a data informada.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
    
// Declaração das variáveis.
 int dia, mes, dias_passados; 

// Solicita ao usuário o dia do mês, lê e atribui o valor informado.
 printf("Informe o dia: ");
 scanf("%d", &dia);

// Solicita ao usuário o mês, lê e atribui o valor informado.
 printf("Informe o mes: ");
 scanf("%d", &mes); 

// Calcula quantos dias se passaram desde o início do ano.
// Fórmula: (mes - 1) * 30. Considera cada mês com 30 dias completos.
// Soma o valor do 'dia' atual ao resultado.
 dias_passados = (mes - 1) * 30 + dia;

// Exibe o resultado na tela.
 printf(" Se passaram %d", dias_passados);

    return 0;
}
