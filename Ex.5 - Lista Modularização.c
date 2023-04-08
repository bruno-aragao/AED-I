/*Crie uma função que determine se dado caracter está entre ‘a’ e ‘z’. Dica: Use a tabela ASCII.  */


#include <stdio.h>
#include <ctype.h>

char c;

char verificaCaracter(char c){
    int tipo; 
    tipo = isalpha(c);
    if (tipo==0){
        printf(" Não"); 
    }else{
        printf(" Sim"); 
    }
}

int main()
{
    printf("\nDigite o caracter: ");
    scanf("%c",&c);
    printf("Caracter: '%c' esta entre 'A' e 'Z'?",c);
    verificaCaracter(c);
    
    return 0; 
}

