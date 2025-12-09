/******************************************************************************

Descrição: Este programa lê um valor em segundos e converte para o formato horas:minutos:
segundos. O resultado é exibido no padrão HH:MM:SS.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
 
// Declara a variável que armazena o total de segundos digitado pelo usuário.
 int total_segundos;

// Declara as variáveis para armazenar o resultado da conversão: horas, minutos e segundos.
 int segundos, minutos, horas;

// Solicita ao usuário que digite o valor em segundos, lê e atribui o valor informado.
 printf("Digite o valor em segundos: ");
 scanf("%d", &total_segundos);

// Calcula o número de horas (1 hora = 3600 segundos).
 horas = total_segundos / 3600;
 
// Calcula o número de minutos a partir do resto da divisão por 3600.
 minutos = (total_segundos % 3600) / 60;
 
// Calcula os segundos restantes.
 segundos = total_segundos % 60;

// Exibe o resultado no formato HH:MM:SS.
 printf("%d SEGUNDOS ---> %02d:%02d:%02d\n", total_segundos, horas, minutos, segundos);

    return 0;
}