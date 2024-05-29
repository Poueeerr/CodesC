#include <stdio.h>

int primop(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Selecione qual par deseja: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Deve ser um valor positivo maior que 0");
        return 1;
    }

    int count = 0;
    int pn = 3;
    while (count < N) {
        if (primop(pn) && primop(pn + 2)) {
            count++;
            if (count == N) {
                printf("Par %d de primos gemeos: (%d, %d)\n", N, pn, pn + 2);
                return 0;
            }
        }
        pn++;
    }

    printf("Nao foi possivel encontrar par %d.\n", N);
    return 0;
}
