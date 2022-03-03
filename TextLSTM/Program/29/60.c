int main () {
    int m, n, i = 1, j = 1;
    double x, s, a = 1, b = 2;
    cin >> m;
    for (j = 1; j <= m; j++) {
        cin >> n;
        for (a = 1, b = 2, i = 1, s = 0; i <= n; i++) {
            if (i % 2 == 1) {
                x = b / a;
                s = s + x;
                a = a + b;
            }
            else {
                x = a / b;
                s = s + x;
                b = b + a;
            }
        }
        printf ("%.3f\n", s);
    }
    return 0;
}

