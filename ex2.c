#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero,resto,restomaior;
    int quantidade = 0;
    //int soma = 0;
    int somamulti = 0;
    int lidos = 0;
    int somadiv = 0;
    int sete;
    int numerosete = 0;
    float percentual;

    do{
        printf("Digite seu numero:");
        scanf("%d",&numero);
        lidos++;
        //soma += numero;

        sete = numero % 7;
        if(sete == 0){
            numerosete++;
        }

        restomaior = numero % 3;
        if(restomaior == 0 && numero > 10){
            somamulti += numero;
        }

        resto = numero % 3;
        if(resto == 0){
            quantidade++;
        }
    } while (numero > 0);

    percentual =(float) numerosete * 100 / lidos;

   // printf("Sua soma eh: %d", soma);
    printf("\nA quantidade de numeros lidos eh: %d",lidos);
    printf("\nA quantidade de numeros divisieis por 3 eh: %d", quantidade);
    printf("\nSua soma de multiplos de 3 maioir q 10 eh: %d", somamulti);
    printf("\npercetual de 7 eh: %2.f ", percentual);





    return 0;

}