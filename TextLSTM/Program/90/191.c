int full (int, int);
int empty (int, int);
int apple (int, int);

int apple (int m, int n) {
    return full (m, n) + empty (m, n);
}

int full (int m, int n) {
    if (m == n)
        return 1;
    else if (m < n)
        return 0;
    else
        return apple (m - n, n);
}

int empty (int m, int n) {
    if (n <= 1)
        return 0;
    else if (m < 1)
        return 0;
    else if (m == 1)
        return 1;
    else
        return apple (m, n - 1);
}

int main () {
    int t, i, m, n;
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d %d", &m, &n);
        printf ("%d\n", apple (m, n));
    }
}

