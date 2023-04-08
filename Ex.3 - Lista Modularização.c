/*Escreva um programa que calcule a área de um círculo a partir de uma função especialmente desenhada para isso;
essa função recebe o valor do raio e retorna a área do círculo.  */

#include <stdio.h>

float calculaAreaCirc(float pi, float raio) // função que calcula a area do circulo com a formula A = pi * R²; 
{
    return pi*(raio*raio); 
}


int main()
{
    float pi = 3.14; // declarando valores das variaveis para calculo da area; 
    float raio = 6; 
    float area = calculaAreaCirc(pi,raio);
    
    printf("Area: %0.2f", area); // resultado do calculo;
    
    return 0; 
}
