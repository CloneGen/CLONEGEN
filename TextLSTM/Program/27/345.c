int main () {
    int i, n;
    double a, b, c, x1, x2;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        if (b * b - 4 * a * c > 0) {
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            printf ("x1=%.5f;x2=%.5f\n", x1, x2);
        }
        if (b * b - 4 * a * c == 0) {
            if (b != 0)
                x1 = -b / (2 * a);
            else
                x1 = 0;
            x1 = -b / (2 * a);
            printf ("x1=x2=%.5f\n", x1);
        }
        if (b * b - 4 * a * c < 0) {
            if (b != 0)
                x1 = -b / (2 * a);
            else
                x1 = 0;
            x2 = sqrt (-b * b + 4 * a * c) / (2 * a);
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, x2, x1, x2);
        }
    }
    return 0;
}

