#include <stdio.h>

int main(){

    int massa;
    int acel;

    printf("Defina a massa do objeto que deseja mover (kgs): ");
    scanf("%d", &massa);

    printf("\nDefina a aceleracao deste objeto quando em movimento (ms^2): ");
    scanf("%d", &acel);

    int forca = (massa*acel);
    printf("\nA forca necessaria para mover o objeto e de: %d Newtons", forca);

    return 0;
}
