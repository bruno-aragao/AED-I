/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*Faça um programa que receba dois números e descubra seu MMC. A identificação do MMC deve ser feita dentro de uma
função que retorne tal valor. A leitura e a escrita dos dados, além da ativação do módulo MMC, devem ficar na função
principal.*/

int main(){
    int a, b, resultado; 
    printf("Digite o primeiro numero: \n");
    scanf("%d",&a);
    while(a<=0){
        printf("Digite o primeiro numero novamente: \n");
        scanf("%d",&a);
    }
    printf("Digite o segundo numero: \n");
    scanf("%d",&b);
    while(b<=0){
        printf("Digite o segundo numero novamente: \n");
        scanf("%d",&b);
    }
    
    printf("O MMC de %d e %d eh: %d",a,b,mmc(a,b));
    
}

int mmc(int a, int b){
    int i, j, max; 
    max = (a>b) ? a : b;
    
    for(i = max; ; i+= max){
        for(j = max; ; i+= max){
            if(j % a == 0 && j % b == 0){
                return j; 
            }
            if (j > i){
                break;
            }
        }
    }
}