#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("\nVerificador de numeros primos.\n\n");
    printf("Informe um numero inteiro positivo qualquer:\n");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    }

    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            primo = 0;
        }
    }

    if( primo == 1) {
        printf("\nO numero %d e primo.\n", num);
    } else {
        printf("\nO numero %d nao e primo.\n\n", num);
    }

    return 0;
}