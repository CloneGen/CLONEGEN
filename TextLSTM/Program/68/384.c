int ss (int x) {
    double m;
    int i, f = 0;
    m = sqrt (x);
    if (x % 2 == 0)
        return 0;
    for (i = 3; i <= m; i++) {
        if (x % i == 0) {
            f = 1;
            break;
        }
    }
    if (f == 1)
        return 0;
    else
        return 1;
}

int main () {
    int n, l, f, m;
    double k;
    int i, j, p;
    scanf ("%d", &n);
    for (p = 6; p <= n; p += 2) {
        l = p / 2;
        for (i = 3; i <= l; i += 2)
            if (ss (i) && ss (p - i)) {
                printf ("%d=%d+%d\n", p, i, p - i);
                break;
            }
    }
    return 0;
}

