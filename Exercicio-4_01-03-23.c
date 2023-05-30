/******************************************************************************

lISTA 2 - EXERCÍCIO 4
          A) imprima o maior elemento 
          B) imprima a posição do maior elemento

******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    for (int i=0; i<TAM; i++) {
        if(v[i]>maior){
            maior = v[i];
            posicao = i++;
        }
    }
    printf("\nO maior elemento é %d e esta na posição %d", maior, posicao);

    return 0;
}

