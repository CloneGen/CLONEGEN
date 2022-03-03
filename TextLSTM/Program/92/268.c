int q [maxlen], t [maxlen];
int f [maxlen] [maxlen];
int n, sum, maxi;
int g (int, int);

int main () {
    while (scanf ("%d", &n) && n) {
        for (int i = 0;
        i < n; ++i)
            scanf ("%d", &t[i]);
        for (int i = 0;
        i < n; ++i)
            scanf ("%d", &q[i]);
        sort (q, q + n);
        sort (t, t + n);
        f[0][0] = 0;
        sum = 0;
        for (int i = 1;
        i <= n; ++i) {
            if (q[n - i] > t[i - 1])
                sum -= 200;
            else if (q[n - i] < t[i - 1])
                sum += 200;
            f[i][0] = sum;
        }
        sum = 0;
        for (int i = 1;
        i <= n; ++i) {
            if (q[n - i] > t[n - i])
                sum -= 200;
            else if (q[n - i] < t[n - i])
                sum += 200;
            f[i][i] = sum;
        }
        for (int i = 2;
        i <= n; ++i)
            for (int j = 1;
            j < i; ++j)
                f[i][j] = max (f[i - 1][j] + g (n - i, i - j - 1), f[i - 1][j - 1] + g (n - i, n - j));
        maxi = -999999999;
        for (int i = 0;
        i <= n; ++i)
            if (f[n][i] > maxi)
                maxi = f[n][i];
        printf ("%d\n", maxi);
    }
    return 0;
}

int g (int qi, int tian) {
    if (q[qi] > t[tian])
        return -200;
    if (q[qi] < t[tian])
        return 200;
    return 0;
}

