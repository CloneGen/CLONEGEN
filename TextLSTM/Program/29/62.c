int main () {
    int m, n, i, j;
    float s;
    float a [10000];
    float b [10000];
    float c [10000];
    a[0] = 1, a[1] = 1;
    cin >> m;
    for (j = 1; j <= m; j++) {
        s = 0;
        cin >> n;
        for (i = 2; i <= (n + 1); i++)
            a[i] = a[i - 1] + a[i - 2];
        for (i = 1; i <= n; i++)
            b[i] = a[i + 1] / a[i];
        for (i = 1; i <= n; i++)
            s = s + b[i];
        c[j] = s;
    }
    for (j = 1; j <= m; j++)
        printf ("%.3f\n", c[j]);
    return 0;
}

