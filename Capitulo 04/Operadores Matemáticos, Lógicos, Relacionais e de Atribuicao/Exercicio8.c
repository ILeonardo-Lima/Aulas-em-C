/******************************************************************************

Descrição: Esse programa faz a leitura da quantidade de produtos (refrigerante) comprados 
por um comerciante, calcula a quantidade total em litros e inprime o resultado utilizando
a função printf.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
    
/* Declara as variáveis que armazenam a quantidade de latas, garrafinhas e garrafas
 e também a variável 'litros' para o resultado final em litros*/
 
 double qtdLata, qtdGarrafinha, qtdGarrafa;
 
 double litros;

// Solicita ao usuário a quantidade de latas de 335 ml compradas, lê e atribui o valor informado.
 printf("Informe a quantidade de latas de 335ml compradas: ");
 scanf("%lf", &qtdLata); 

// Solicita ao usuário a quantidade de garrafinhas de 290 ml compradas, lê e atribui o valor informado.
 printf("Informe a quantidade de garrafas de 290ml compradas: ");
 scanf("%lf", &qtdGarrafinha); 

// Solicita ao usuário a quantidade de garrafas de 2 litros compradas, lê e atribui o valor informado.
 printf("Informe a quantidade de garrafas de 2L compradas: ");
 scanf("%lf", &qtdGarrafa);

// Converte a quantidade de cada embalagem para litros:
// cada lata tem 335 ml.
 qtdLata = qtdLata * 0.335;
 
// cada garrafinha tem 290 ml.
 qtdGarrafinha = qtdGarrafinha * 0.290;
 
// cada garrafa tem 2 litros.
 qtdGarrafa = qtdGarrafa * 2.0;

// Soma o total em litros.
litros = qtdLata + qtdGarrafinha + qtdGarrafa;

// Exibe o resultado formatado com 3 casas decimais.
printf("Você comprou: %.3lf litros no total\n", litros);

    return 0;
}
