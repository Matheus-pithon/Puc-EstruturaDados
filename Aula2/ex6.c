#include <stdio.h>
#include <stdlib.h>

 void imprime( int a){

        if(a == 0){
            return;
        }


        printf("%d",a);

        return(imprime(a - 1));
}
    int main(){
        int n;

        printf("Escolha um numero:");
        scanf("%d", &n);


        imprime(n);
    }