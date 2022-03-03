int main () {
    int m;
    cin >> m;
    int n [100];
    int i, j;
    double a = 1, b = 2, c, t, s = 0;
    for (i = 0; i < m; i++) {
        cin >> n[i];
        for (j = 0; j < n[i]; j++) {
            c = b / a;
            s = s + c;
            t = b;
            b = a + b;
            a = t;
        }
        printf ("%.3lf\n", s);
        s = 0;
        a = 1;
        b = 2;
    }
    return 0;
}

