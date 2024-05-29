#include <stdio.h>

int main(){


    float mex;
    float mlab;
    float mp;
    float tr;

    printf("Insira a media das listas: ");
    scanf("%f", &mex);

    printf("\nInsira a media do lab: ");
    scanf("%f", &mlab);

    printf("\nInsira a media das provas: ");
    scanf("%f", &mp);

    printf("\nInsira a nota do trabalho: ");
    scanf("%f", &tr);


    float medf = (mex*0.25)+(mlab*0.15)+(mp*0.25)+(tr*0.35);
    printf("\nA nota final do aluno e de: %0.2lf\n", medf);
    if(medf < 5 ){
        printf("\nAluno reprovado");
    }
    if(medf >= 5 && medf < 6){
        printf("\nAluno tem direito a recuperacao");
    }
    if(medf >=6){
        printf("\nAluno aprovado");

    }
    return 0;
}
