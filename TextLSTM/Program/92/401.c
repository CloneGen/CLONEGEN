int pk (int a, int b) {
    if (a > b)
        return 200;
    if (a < b)
        return -200;
    if (a == b)
        return 0;
}

int main () {
    int q = 1;
    for (;; q++) {
        int n, qw [1000], tj [1000], k, K, money = 0, i, j, max = -1000000;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i <= n - 1; i++)
            scanf ("%d", &tj[i]);
        for (i = 0; i <= n - 1; i++)
            scanf ("%d", &qw[i]);
        for (j = 1; j <= n - 1; j++) {
            for (i = 0; i <= n - j - 1; i++) {
                if (tj[i] < tj[i + 1]) {
                    k = tj[i];
                    tj[i] = tj[i + 1];
                    tj[i + 1] = k;
                }
                if (qw[i] < qw[i + 1]) {
                    K = qw[i];
                    qw[i] = qw[i + 1];
                    qw[i + 1] = K;
                }
            }
        }
        int b [1000];
        for (i = 0; i <= n - 1; i++) {
            money = 0;
            for (j = 0; j <= n - i - 1; j++) {
                money = money + pk (tj[j], qw[j + i]);
            }
            b[i] = money - i * 200;
        }
        for (i = n; i <= 999; i++)
            b[i] = 0;
        for (i = 0; i <= n - 1; i++) {
            if (b[i] > max)
                max = b[i];
        }
        printf ("%d\n", max);
    }
}

