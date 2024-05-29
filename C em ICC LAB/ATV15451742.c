#include <stdio.h>
#include <stdlib.h>

int menu() {
  int opc;
  printf("\n\n:::: BEM-VIND@S AO PROGRAMA ::::\n\n");
  printf("\n\nEscolha uma das opcoes a seguir:\n(1) - Calcular o fatorial do "
         "numero N; \n(2) - Calcular a somatoria dos fatoriais de 1 ate N; "
         "\n(3) - Calcular a serie E; \nDigite outro numero diferente para "
         "sair.\n\nDigite sua opcao ... ");
  if (scanf("%d", &opc) != 1 || opc < 1 || opc > 3) {
    printf("Opção inválida.\n");
    exit(1);
  }
  return opc;
}

long double fatorial(int n) {
  long double res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}

long double somatoria(int n) {

  long double soma = 0;
  for (int i = 1; i <= n; i++) {
    soma += fatorial(i);
  }
  return soma;
}

long double e(int n) {

  long double res = 1;
  for (int i = 1; i <= n; i++) {
    res += 1 / fatorial(i);
  }
  return res;
}

int main() {
  int opc, n;
  long double resultado = 1;
  char continuar = 's';
  do {
    opc = menu();

    printf("\nVOCE SELECIONOU: %d ,", opc);

    printf("Digite o valor de N: ");
    if (scanf("%d", &n) != 1 || n < 0) {
      printf("O valor de N deve ser um inteiro positivo.\n");
      exit(1);
    }

    switch (opc) {
    case 1:
      resultado = fatorial(n);
      printf("\nO fatorial de %d eh: %.0Lf\n", n, resultado);
      break;
    case 2:
      resultado = somatoria(n);
      printf("A soma dos n primeiros numeros fatoriais de %d e igual a %.0Lf\n",
             n, resultado);
      break;
    case 3:
      resultado = e(n);
      printf("O resultado da série E para o numero %d é: %.2Lf\n", n,
             resultado);
      break;
    }
    printf("\nDeseja continuar (S/N)? ");
    scanf(" %c", &continuar);
  } while (continuar == 'S' || continuar == 's');
  printf("Programa encerrado.\n");

  return 0;
}
