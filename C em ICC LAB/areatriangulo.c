#include <stdio.h>

int main(){

    int oper;
    int soma, subtracao, multiplicacao, divisao;
    float n1, n2;

    printf("Selecione uma opcao de 1 a 4\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\nOpcao: ");
    scanf("%d", &oper);
    switch (oper){
        case 1:
            printf("\nVoce selecionou 1\n");
            soma = 1;
            break;
        case 2:
            printf("\nVoce selecionou 2\n");
            subtracao = 1;
            break;
        case 3:
            printf("\nVoce selecionou 3\n");
            multiplicacao = 1;
            break;
        case 4:
            printf("\nVoce selecionou 4\n");
            divisao = 1;
            break;
    }
    printf("\nDigite o primeiro termo: ");
        scanf("%f", &n1);
            printf("\nDigite o segundo termo: ");

        scanf("%f", &n2);
        printf("O valor selecionado foi %.2f e %.2f", n1, n2);
    if(soma == 1){

        float opersoma = n1 + n2;
        printf("\nA soma e: %.2f", opersoma);
    }
    if(subtracao == 1){

        float opersoma = n1 - n2;
        printf("\nA subtracao e: %.2f", opersoma);
    }
    if(multiplicacao == 1){

        float opersoma = n1 * n2;
        printf("\nA multiplicacao e: %.2f", opersoma);
    }
    if(divisao == 1){
        if(n2<=0){
            printf("\nDivisao impossivel\n");
            return 0;
        }
        float opersoma = n1 / n2;
        printf("\nA divisao e: %.2f\n", opersoma);
    }

    return 0;
}
