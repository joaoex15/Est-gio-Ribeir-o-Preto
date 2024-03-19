#include <stdio.h>

int main() {
    int n, i;
    int array[100];
    int resul_n;
    array[0] = 0;
    array[1] = 1;
    array[2] = 1;
    resul_n = 0;
    scanf("%d", &n);
    for (i = 3; ; i++) {
        resul_n = array[i - 1] + array[i - 2];
        if (n == resul_n) {
            printf("%d pertence à sequência de Fibonacci\n", n);
            break;
        } else if (n < resul_n) {
            printf("%d não pertence à sequência de Fibonacci\n", n);
            break;
        }
        array[i] = resul_n;
    }
    return 0;
}