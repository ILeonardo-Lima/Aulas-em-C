/******************************************************************************

Descrição: Este programa lê dois valores inteiros (A e B) informados pelo usuário e realiza
a troca de seus valores sem utilizar uma variável auxiliar. O resultado final é
exibido na tela mostrando os valores trocados..
Nome: Lucas Garcia e Leonardo de Oliveira
Data: 25/09/2025

*******************************************************************************/
#include <stdio.h>

int main()
{
    
// Declara duas variáveis inteiras A e B.
 int A, B;

// Solicita ao usuário que informe o valor de A, lê e atribui o valor informado. 
 printf("Digite o valor de A: ");
 scanf("%d", &A);
 
// Solicita ao usuário que informe o valor de B, lê e atribui o valor informado.  
 printf("Digite o valor de B: ");
 scanf("%d", &B);
   
// Troca sem variável auxiliar:
// Soma A e B e armazena em A.
 A = A + B;
 
/* Subtrai o valor atual de B da soma armazenada em A,
resultando no valor original de A e armazenando em B.*/
  B = A - B;
  
/* Subtrai o valor atual de B do valor em A,
 resultando no valor original de B e armazenando em A.*/
 A = A - B;
    
// Exibe os valores de A e B após a troca.
 printf("A = %d e B = %d", A, B);

    return 0;
}
