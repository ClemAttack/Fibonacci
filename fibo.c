#include <stdio.h>

int main () {

    int n, i;
    int a = 0, b = 1, c;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci jusqu'à %d itérations : ", n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}