#include <stdio.h>
#include <stdlib.h>


    int quad(int c){
        int n;
        n = c*c;
        return c;
    }

    int soquad(int a, int b){
        int q1,q2;
        int soma;

        q1 = quad(a);
        q2 = quad(b);

        soma = q1 + q2;

        return soma;
    }


    int lendo(){
        int n;
        printf("Qual eh o numero:");
        scanf("%d", &n);
        return n;
    }

int main(){
    int soma;
    int n1,n2;

    n1 = lendo();
    n2 = lendo();

    soma = soquad( n1,n2);



    printf("Os numeros lidos foram: %d , %d", n1,n2);
    printf("\nA soma dos quadrados eh:: %d", soma);
}