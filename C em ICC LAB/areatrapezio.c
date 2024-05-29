#include <stdio.h>

int main(){

    float baseM;
    float baseMen;
    float altura;

    printf("Defina o valor da base menor: ");
    scanf("%f", &baseMen);

    printf("Defina o valor da base maior: ");
    scanf("%f", &baseM);

    printf("Defina o valor da altura: ");
    scanf("%f", &altura);

    float base = (baseM + baseMen);
    float area = ((base*altura)/2);

    printf("A area do trapezio e de: %0.2f", area);
    return 0;
}
