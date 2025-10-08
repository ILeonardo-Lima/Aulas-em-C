/******************************************************************************

Descrição: Esse programa lê 4 notas de um aluno, calcula a média ponderada dessas notas 
assumindo pesos respectivos de 1,2, 3 e 4, em seguida imprime uma mensagem com
o resultado da média ponderada.
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025


*******************************************************************************/
#include <stdio.h>

int main()
{
    
// Declara quatro variáveis do tipo float para armazenar as notas.
 float nota1, nota2, nota3, nota4;

// Declara duas variáveis float para guardar a soma ponderada e a média final.
 float soma, media;

// Solicita ao usuário o valor da primeira nota, lê e atribui o valor informado.
 printf("Informe o valor da primeira nota: ");
 scanf("%f", &nota1);

// Solicita ao usuário o valor da segunda nota, lê e atribui o valor informado.
 printf("Informe o valor da segunda nota: ");
 scanf("%f", &nota2);

// Solicita ao usuário o valor da terceira nota, lê e atribui o valor informado.
 printf("Informe o valor da terceira nota: ");
 scanf("%f", &nota3);

// Solicita ao usuário o valor da quarta nota, lê e atribui o valor informado.
 printf("Informe o valor da quarta nota: ");
 scanf("%f", &nota4);

// Calcula a soma ponderada das notas.
// Nota1 tem peso 1, Nota2 peso 2, Nota3 peso 3 e Nota4 peso 4.
 soma = (nota1 * 1) + (nota2 * 2) + (nota3 * 3) + (nota4 * 4);

// Calcula a média ponderada dividindo a soma pelo total dos pesos (1+2+3+4 = 10).
 media = soma / 10;

// Exibe a média ponderada com duas casas decimais.
 printf("A média ponderada dos valores informados é: %.2f\n", media);
    

    return 0;
}