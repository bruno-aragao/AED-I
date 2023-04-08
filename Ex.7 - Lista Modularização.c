/*Escreva uma função que retorne o cubo do valor passado como argumento.*/

#include <stdio.h>

int retornaCubo(int valor){
    return valor*valor*valor; 
}

int main()
{
    int valor; 
    
    printf("\nDigite o valor: ");
    scanf("%d",&valor);
    
    printf("\nResultado: %d",retornaCubo(valor)); 

    return 0;
}
