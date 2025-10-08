/******************************************************************************

Descrição: Esse programa solicita o número de dias trabalhados por um profissionaol e
imprime a quantia líquida que deverá ser paga a ele levando em consideração uma diária
de R$ 150,00 com desconto de 8%.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{

// variável inteira para armazenar a quantidade de dias trabalhados. 
 int diasTrabalhados; 

// variável real para armazenar o valor a ser pago.
 float pagamento;       

// Solicita ao usuário a quantidade de dias trabalhados, lê e atribui o valor informado.
 printf("Informe a quantidade de dias trabalhados: ");
 scanf("%d", &diasTrabalhados);

// Calcula o valor bruto: número de dias * R$150,00 por dia.
 pagamento = diasTrabalhados * 150.00;

// Calcula o valor líquido: aplica o desconto de 8%.
 pagamento = pagamento - (pagamento * 8 / 100);

// Exibe o valor final a ser pago com duas casas decimais
 printf("O funcionário deve receber R$ %.2f\n", pagamento);

    return 0;
}