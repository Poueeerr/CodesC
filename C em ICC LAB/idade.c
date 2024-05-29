#include <stdio.h>
#include <windows.h>

int main(){

    SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    int anoAtual = str_t.wYear;
    int anoNasc;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    int idade = (anoAtual - anoNasc);
    printf("\nSua idade e de: %d", idade);

    int meses = (idade*12);
    printf("\nSua idade em meses e de: %d", meses);


    return 0;
}
