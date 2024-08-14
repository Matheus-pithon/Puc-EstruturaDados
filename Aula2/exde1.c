#include <stdio.h>
#include <stdlib.h>

    int calcs(int a){
        int soma = 0;
        while(a > 0){

        soma +=  a % 10;
        a = a/10;
        }
        return soma;

    }

    int compara(int a){
        int resto;
        int maior = 0;
        while(a > 0){
        resto =  a % 10;
        if(maior > resto ){
            maior = maior;
        }else {
            maior = resto;
        }
        a = a/10;
        }

        return maior;

    }

int main(){
    int numero, soma;
    int maior;
    printf("Digite um numero:");
    scanf("%d", &numero);

    soma = calcs(numero);

    maior = compara(numero);

    printf("A soma dos numero eh: %d", soma);
    printf("\no maior numero eh: %d", maior);
}
