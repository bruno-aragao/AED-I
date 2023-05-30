/* 
3-) LEIA UM VETOR DE 10 POSIÇÕES, CONTE E ESCREVA QUANTOS VALORES PARES ELE POSSUI 
*/ 
#include <stdio.h>

int main()
{
    int vet[4],i,cont;
    
    for(i=0;i<4;i++){
        printf("Digite o %d valor: ",i+1);
        scanf("%d",&vet[i]);
        if(vet[i]%2==0){
           cont++; 
        }
    }
    printf("A quantidade de pares seria: %d",cont);
    return 0;
}
