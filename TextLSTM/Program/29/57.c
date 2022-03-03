int main () {
    int m;
    cin >> m;
    double a = 1, b = 1, c, n, sum = 0;
    for (int i = 1;
    i <= m; i++) {
        cin >> n;
        a = 1, b = 1, sum = 0;
        for (int j = 1;
        j <= n; j++) {
            c = a + b;
            sum = sum + c / b;
            a = b;
            b = c;
        }
        printf ("%.3f\n", sum);
    }
    return 0;
}

