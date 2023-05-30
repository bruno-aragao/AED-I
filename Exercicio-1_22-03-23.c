/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int leia(){
        int x; 
        printf("Digite o valor do lado: \n");
        scanf("%d",&x);
        
        while (x<0){
            printf("Digite o valor do lado novamente: \n");
            scanf("%d",&x);
        }
    }
    
    int formaTriangulo(int a, int b, int c){
        if ((a+b>c)&&(a+c>b)&&(b+c>a)){
            return; //retorna 1 se for triangulo
        }else{
            return 0; // retorna 0 se nao for triangulo
        }
    }
    
    void mostraTriangulo(int a, int b, int c){
        if(a==b&&b==c){
            printf("Triangulo equilatero \n");
        }else if (a==b||a==c||b==c){
            printf("Triangulo isosceles \n");
        }else{
            printf("Triangulo escaleno \n");
        }
    }
    
    void main(){
        int a, b, c;
        
        a = leia (a);
        b = leia (b);
        c = leia (c);
        
        if(formaTriangulo(a,b,c)){
            mostraTriangulo(a,b,c);
        }else{
            printf("Os lados nao foram um triangulo \n");
        }
    }
}
