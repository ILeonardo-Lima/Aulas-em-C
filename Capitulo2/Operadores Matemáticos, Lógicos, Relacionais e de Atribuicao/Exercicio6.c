/******************************************************************************

Descrição: Esse programa lê o raio e a altura de uma lata de óleo, calcula e apresenta 
o volume dessa lata utilizando a função printf para imprimir o resultado.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    
// Declara variáveis do tipo double para maior precisão:
// 'volume' armazenará o resultado final,
// 'R' será o raio da lata de óleo.
// 'H' será a altura da lata de óleo.
 double volume, R, H;

// Declara a constante PI com valor aproximado de PI (3.14159) já atribuido .
 double PI = 3.14159;

// Solicita ao usuário o valor do raio, lê e atribui o valor informado.
 printf("Informe o valor do raio da lata: ");
 scanf("%lf", &R);

// Solicita ao usuário o valor da altura, lê e atribui o valor informado.
 printf("Informe o valor da altura da lata: ");
 scanf("%lf", &H);

// Calcula o volume do cilindro usando a fórmula V = PI * R elevado 2 * H.
// 'pow(R,2)' é usado para calcular R elevado ao quadrado.
 volume = PI * pow(R, 2) * H;

// Exibe o resultado do volume com duas casas decimais.
printf("O volume da lata de óleo é: %.2lf\n", volume);

    return 0;
}