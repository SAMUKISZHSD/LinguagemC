#include <stdio.h>
#include <math.h>

//solicita ao usuário que insira 4 números, calcula o quadrado de cada um e os imprime na tela.

int main() {
    int a[4], b[4];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite A[%d]: ", i + 1);
        scanf("%d", &a[i]);
        b[i] = pow(a[i], 2);
    }

    printf("\nValores de A:\n");
    for (i = 0; i < 4; i++) {
        printf("A[%d]: %d\n", i + 1, a[i]);
    }

    printf("\nValores de B (quadrado dos valores de A):\n");
    for (i = 0; i < 4; i++) {
        printf("B[%d]: %d\n", i + 1, b[i]);
    }

    return 0;
}
