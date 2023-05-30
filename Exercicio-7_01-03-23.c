/******************************************************************************
7-) FAÇA UM PROGRAMA QUE PREENCHA UM VETOR COM 10 NUMEROS REAIS. CALCULE E MOSTRE A SOMA DOS NUMEROS POSITIVOS 
DESSE VETOR E A QUANTIDADE DE NEGATIVOS
*******************************************************************************/
#include <stdio.h>

int main()
{
    float pos,neg; 
    int vet[4], i;
    for (i=0;i<4;i++){
        printf("Digite um valor: %d",i+1);
        scanf("%f",&vet[i]);
        if(vet[i]<0){
            neg++;
        }else if(vet[i]>=0){
            pos += vet[i];
        }
    }
    printf("A soma dos numeros positivos resulta em: %f e a quantidade de negativos seria: %f",pos,neg);

    return 0;
}
