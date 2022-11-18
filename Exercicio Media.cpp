#include <stdio.h>

int main()
{
    float num1, num2; 
    float mediaArit; 
    
    printf("Digite o primeiro valor: ");
    scanf("%f",&num1);
    printf("Digite o segundo valor: ");
    scanf("%f",&num2);
    
    mediaArit = (num1 + num2)/2;
    
    printf("A média resulta em: %0.2f",mediaArit);
    
    
    return 0;
}
