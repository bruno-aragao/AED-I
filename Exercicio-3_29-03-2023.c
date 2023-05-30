//Altere o main para que o valor 10 seja mostrado na linha 3 (2° printf do main). 

#include <stdio.h>

int muda(int n);
void muda2 (); 

int main(){
    
    int n=5; 
    printf("n = %d antes da chamada de muda\n",n);
    
     
    muda(n);
    printf("n = %d depois da chamada de muda\n",muda(n));
    
    printf("n = %d antes da chamada de muda2\n",n); 
    muda2();
    printf("n = %d depois da chamada de muda2\n",n);
}

int muda (int n){
    n = 10; 
    printf("n = %d dentro da chamada de muda\n",n);
    return n; 
}

void muda2(){
    int n = 10; 
    printf("n = %d dentro da chamada de muda2\n",n);
}




























