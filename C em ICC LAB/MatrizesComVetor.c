#include <stdio.h>

int main() {
    int tabela[5][2] = {{1234, 7}, {4443, 4}, {6654, 9}, {4332, 6}, {5644, 8}};
    int notamaior = tabela[0][1];
    int indice_maior = 0;

    for (int l = 0; l < 5; l++) {
        printf("RA: %d Nota: %d\n", tabela[l][0], tabela[l][1]);
        if (tabela[l][1] > notamaior) {
            notamaior = tabela[l][1];
            indice_maior = l;
        }
    }

    printf("\nA maior nota e: %d, do aluno com RA: %d\n", notamaior, tabela[indice_maior][0]);

    return 0;
}
