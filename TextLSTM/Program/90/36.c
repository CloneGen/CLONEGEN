int make (int m, int n, int x) {
    int i, s;
    if (m == 0) {
        if (n == 0) {
            return 1;
        }
        else
            return 0;
    }
    else {
        s = 0;
        for (i = x; i <= n; i++)
            s = s + make (m - 1, n - i, i);
        return s;
    }
}

int main () {
    int i, k, j, p, n, t, a [100] [100], m, x;
    scanf ("%d", &t);
    for (p = 1; p <= t; p++) {
        scanf ("%d%d", &m, &n);
        x = make (n, m, 0);
        printf ("%d\n", x);
    }
}

