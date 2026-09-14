#include <stdio.h>

int main() {
    long long x;
    scanf("%lld", &x);

    if (x < 2) {
        printf("-1\n");
    } else {
        for (long long i = 2; i <= x; i += 2) {
            printf("%lld\n", i);
        }
    }

    return 0;
}
