#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c, delta, x1, x2;

	printf("Digite o valor de A: ");
	scanf("%f",&a);
	printf("Digite o valor de B: ");
	scanf("%f",&b);
	printf("Digite o valor de C: ");
	scanf("%f",&c);
	delta = b*b - 4*a*c;

    if (delta < 0){
        printf("Nao existe solucao real! ");
    }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("As raizes sao %0.2f e %0.2f", x1,x2);	
	}
}
