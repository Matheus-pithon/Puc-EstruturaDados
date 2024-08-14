#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float calcula_hip(int a, int b){
        float hip;
        hip = (double) sqrt((a*a) + (b*b));
        return hip;
    }




int main(){
    int cat1,cat2;
    float hip;

    printf("Informe a medida do primeiro cateto:");
    scanf("%d", &cat1);
    printf("Informe a medida do segundo cateto:");
    scanf("%d", &cat2);

    hip = calcula_hip(cat1, cat2);

    printf("O valor da hipotenusa eh: %f", hip);


}