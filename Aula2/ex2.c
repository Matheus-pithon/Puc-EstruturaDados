#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int funcfat(int a){
        if(a==1){
            return 1;
        }
        return ( a * (funcfat(a-1)));

    }

int main(){
    int n1,n2,n3;
    int fat1,fat2,fat3;

    printf("Fale o primeiro numero:");
    scanf("%d", &n1);
    printf("Fale o primeiro numero:");
    scanf("%d", &n2);
    printf("Fale o primeiro numero:");
    scanf("%d", &n3);

    fat1 = funcfat(n1);
    fat2 = funcfat(n2);
    fat3 = funcfat(n3);

    printf("O resultado da fatorial de %d eh: %d",n1, fat1);
    printf("\nO resultado da fatorial de %d eh: %d",n2, fat2);
    printf("\nO resultado da fatorial de %d eh: %d", n3,fat3);



}