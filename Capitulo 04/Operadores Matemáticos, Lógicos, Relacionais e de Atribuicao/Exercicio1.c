/******************************************************************************

Descrição: Esse programa lê o preço do litro da gasolina, o valor do pagamento
e exibe quantos litros de gasolina um motorista conseguiu colocar no tanque.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
// Variável do tipo float com o preço do litro já atribuido.  
 float precoLitro = 5.98;
 
// Variável float para armazenar a quantidade de litros abastecidos e o valor do pagamento
 float litros, valorPagamento;   

// Solicita ao usuário o valor do pagamento, lê e atribui o valor informado.
 printf("Digite o valor do pagamento: ");
 scanf("%f", &valorPagamento); 

// Calcula quantos litros podem ser abastecidos dividindo o valor do pagamento pelo preço do litro.
 litros = valorPagamento / precoLitro;

// Exibe o resultado formatado com 2 casas decimais.
 printf("O motorista conseguiu abastecer %.2f litros de gasolina.\n", litros);

    return 0;
}