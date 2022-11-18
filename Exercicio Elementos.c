
#include <stdio.h>

int main()
{
    int elementos=2, i;
    float minimo, res=100000;
    
    fflush(stdin);  
    float vetor[elementos];
    for (i = 0 ; i < elementos ; i++){
        printf("Digite o %i valor: ", i+1);
        scanf("%f",&vetor[i]);
        if(vetor[i]<res){
            res = vetor[i];
        }
    }
    printf("O valor minimo é: %.2f", res);

    return 0;
}



