int main () {
    int m = 0, n = 0, i = 0, j = 0, t = 0, p = 0;
    double d = 0, sum = 0, x1 = 2, y1 = 1, x2 = 3, y2 = 2;
    cin >> m;
    for (i = 0; i < m; i++) {
        cin >> n;
        if (n == 1) {
            sum = 2;
        }
        else {
            sum = 3.5;
            for (j = 3; j <= n; j++) {
                t = x2;
                p = y2;
                x2 = x2 + x1;
                y2 = y2 + y1;
                x1 = t;
                y1 = p;
                d = x2 / y2;
                sum = sum + d;
            }
            x1 = 2;
            y1 = 1;
            x2 = 3;
            y2 = 2;
        }
        printf ("%.3f\n", sum);
    }
    return 0;
}

