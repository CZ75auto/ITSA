#include <math.h>
#include <stdio.h>
main() {
    long N;
    int i;
    int key =0;

    scanf("%ld", &N);
    if (N == 1) {       /*�p��2���ƫD���*/
        printf("%ld is not a prime number.\n", N);
    } else {
        if (N <= 3) {       /* 2 �M 3 �����*/
            printf("%ld is a prime number.\n", N);
        } else {
            for (i=3; i <= N/2; i++) {
                if (N % i == 0) {
                    printf("%ld is not a prime number.\n", N);
                    return;
                }
            }
            printf("%ld is a prime number.\n", N);
        }
    }
}
