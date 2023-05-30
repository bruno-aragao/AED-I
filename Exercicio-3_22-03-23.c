/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que calcule a soma dos N primeiros números primos, sendo N definido pelo usuário na função main. O
programa ainda deverá ter as funções somaPrimos e primo, sendo que a primeira será responsável pela soma dos números
que forem primos e a segunda será responsável por verificar se o número em questão é primo ou não.*/

#include <stdio.h>

int primo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int somaPrimos(int n) {
    int i, soma = 0, contador = 0;

    for (i = 2; contador < n; i++) {
        if (primo(i)) {
            soma += i;
            contador++;
        }
    }

    return soma;
}

int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("A soma dos %d primeiros numeros primos eh: %d\n", n, somaPrimos(n));

    return 0;
}