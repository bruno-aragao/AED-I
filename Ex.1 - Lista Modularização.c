//1. Escreva um programa que implemente uma função que retorne a diferença entre dois números inteiros digitados pelo usuário.  

#include <stdio.h>

int retornaDiferenca(int a, int b){
    return a - b; 
}

int main()
{
    int a, b; 
    
    printf("\nDigite o primeiro valor: ");
    scanf("%d",&a); //leitura dos dados digitados pelo usuário
    printf("\nDigite o segundo valor: ");
    scanf("%d",&b); //leitura dos dados digitados pelo usuário

    printf("\nA diferenca entre os valores digitados resulta em: %d",retornaDiferenca(a,b)); //chamando a função para retornar a diferença dos valores digitados. 
    
        
    return 0;
}
