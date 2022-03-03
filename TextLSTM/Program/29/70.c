int main () {
    int m, i;
    cin >> m;
    double x;
    double a, b, c;
    double result;
    for (i = 1; i <= m; i++) {
        int n, j;
        cin >> n;
        a = 1, b = 2;
        result = 2 / 1;
        for (j = 1; j <= n; j++) {
            c = b + a;
            a = b;
            b = c;
            x = b / a;
            result = result + x;
        }
        result = result - x;
        printf ("%.3f", result);
        cout << '\n';
    }
    return 0;
}

