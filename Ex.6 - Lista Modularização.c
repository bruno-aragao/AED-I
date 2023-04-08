/*Escreva um programa que implemente uma função que passe dado número inteiro como parâmetro
e este desenhe um número equivalente a “*” na tela.*/

#include <stdio.h>

void desenhaNumero(int numero){
    int i; 
    if(numero<=0){
        printf("Numero invalido. \n");
    }else{
        for (i=0;i<numero;i++){
            printf("*"); 
        }
    }
}

void main(){
    
    int numero; 
    
    printf("\nDigite o numero inteiro: "); 
    scanf("%d",&numero);
    
    printf("O numero %d resulta em: ",numero); 
    desenhaNumero(numero);
    
}

