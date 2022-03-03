int primes [20000];

int isPrimeNumber (int p) {
    int j;
    for (j = 0; primes[j] * primes[j] < p; j++) {
        if (p % primes[j] == 0)
            return 0;
    }
    if (primes[j] * primes[j] > p) {
        return 1;
    }
    return 0;
}

void AllPrimes (int n) {
    int number = 1;
    int i, j;
    primes[0] = 2;
    for (i = 3; i <= n; i = i + 2) {
        for (j = 0; primes[j] * primes[j] < i; j++) {
            if (i % primes[j] == 0)
                break;
        }
        if (primes[j] * primes[j] > i) {
            primes[number] = i;
            number++;
        }
    }
}

int main () {
    int n;
    scanf ("%d", &n);
    int j;
    AllPrimes (n);
    for (j = 6; j <= n; j += 2) {
        int half = j / 2;
        int i;
        int isPrime1, isPrime2;
        for (i = 3; i <= half; i = i + 2) {
            isPrime1 = isPrimeNumber (i);
            isPrime2 = isPrimeNumber (j - i);
            if (isPrime1 && isPrime2) {
                printf ("%d=%d+%d\n", j, i, j - i);
                break;
            }
        }
    }
    return 0;
}

