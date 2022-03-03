int factoring (int a, int b) {
    int i, kind = 0;
    if (a == 1) {
        kind = 1;
    }
    else {
        for (i = b; i <= a; i++) {
            if (a % i == 0) {
                kind = factoring (a / i, i) + kind;
            }
        }
    }
    return kind;
}

int main () {
    int n, x [40000], i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &x[i]);
    }
    for (i = 0; i < n; i++) {
        x[i] = factoring (x[i], 2);
        printf ("%d\n", x[i]);
    }
    return 0;
}

