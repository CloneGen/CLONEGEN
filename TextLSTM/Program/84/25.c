int main () {
    int M, m, n, i, a1, a2, a;
    scanf ("%d", &n);
    scanf ("%d%d", &a1, &a2);
    if (a1 > a2) {
        M = a1;
        m = a2;
    }
    else {
        M = a2;
        m = a1;
    }
    for (i = 3; i <= n; i++) {
        scanf ("%d", &a);
        if (m > a) {
            M = M;
            m = m;
        }
        else {
            if (a > M) {
                m = M;
                M = a;
            }
            else {
                M = M;
                m = a;
            }
        }
    }
    printf ("%d\n%d", M, m);
    return 0;
}

