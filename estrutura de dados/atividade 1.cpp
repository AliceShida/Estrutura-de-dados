#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Informe um número (ou 0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;
        printf("Informe outro (ou 0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("Soma total: %d\n", soma);
    if (soma >= 0) {
        printf("Positivo");
    } else {
        printf("Negativo");
    }

    return 0;
}