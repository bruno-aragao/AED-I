/*Escreva uma função que retorne a divisão entre dois números inteiros.
Atenção para a questão da divisão por zero! A divisão não pode ocorrer se o divisor for zero.  */

#include <stdio.h>

float divide(int dividendo, int divisor) {
        return dividendo / divisor;
}

int main() {
    int a = 10;
    int b = 3;
    float resultado;
    
    resultado = divide(a,b);
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
    }else{
        printf("Resultado: %f\n", resultado);
    }
    
    return 0;
}

