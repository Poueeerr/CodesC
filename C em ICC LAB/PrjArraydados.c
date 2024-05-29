#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int useraddqtd;
    printf("Defina a quantidade de usuarios que deseja adicionar: ");
    scanf("%d", &useraddqtd);
    getchar(); // Limpar o buffer de entrada

    char username[useraddqtd][100];
    int idadeuser[useraddqtd];
    float saldoatual[useraddqtd];
    int user_id[useraddqtd]; // Array para armazenar IDs dos usuários

    // Inicializar a semente do gerador de números aleatórios
    srand(time(NULL));

    int i = 0;

    for (i = 0; i < useraddqtd; i++) {
        printf("\nDefina o nome do usuario %d: ", i);
        gets(username[i]);
        printf("Insira a idade do usuario: ");
        scanf("%d", &idadeuser[i]);
        printf("Insira o saldo do usuario: ");
        scanf("%f", &saldoatual[i]); // Corrigido para "%f" para float
        getchar(); // Limpar o buffer de entrada
        user_id[i] = rand();

    }

    for (i = 0; i < useraddqtd; i++) {
        printf("\nUsuario %d nome: %s", i, username[i]);
        printf("\nUsuario %d ID: %d", i, user_id[i]);
        printf("\nIdade: %d",  idadeuser[i]);
        printf("\nSaldo: %.2f R$\n", saldoatual[i]); // Corrigido para "%.2f" para float
    }

    return 0;
}
