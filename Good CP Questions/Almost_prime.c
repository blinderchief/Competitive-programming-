
#include <stdio.h>

int isAlmostPrime(int num) {
    int count = 0;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            while (num % i == 0) {
                num /= i;
            }
        }
    }

    if (num > 1) {
        count++;
    }

    return count == 2;
}

int main() {
    int n;
    scanf("%d", &n);

    int almostPrimeCount = 0;

    for (int i = 1; i <= n; i++) {
        if (isAlmostPrime(i)) {
            almostPrimeCount++;
        }
    }

    printf("%d\n", almostPrimeCount);

    return 0;
}
