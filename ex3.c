#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    int soma = 1;
    int final;

    printf("Coloque um numero:");
    scanf("%d", &numero);

    for( int i = 0; i < numero; i++){
        final += soma;
        soma += 2;
    }

    printf("A soma eh: %d", final);

    return 0 ;
    }
