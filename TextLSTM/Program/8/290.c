void main () {
    void shuru (int *p, int m);
    void paixu (int *p, int m);
    void hebing (int *p1, int m, int *p2, int n);
    void shuchu (int *p, int);
    int m, n, i;
    int *p1, *p2;
    int a [200], b [100];
    p1 = a;
    p2 = b;
    scanf ("%d%d", &m, &n);
    shuru (p1, m);
    shuru (p2, n);
    paixu (p1, m);
    paixu (p2, n);
    hebing (p1, m, p2, n);
    shuchu (p1, m + n);
}

void shuru (int *p, int m) {
    int i;
    for (i = 0; i < m; i++)
        scanf ("%d", p + i);
}

void paixu (int *p, int m) {
    int i, j, temp;
    for (i = 0; i < m - 1; i++)
        for (j = i + 1; j < m; j++)
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
}

void hebing (int *p1, int m, int *p2, int n) {
    int i;
    for (i = 0; i < n; i++)
        *(p1 + m + i) = *(p2 + i);
}

void shuchu (int *p, int x) {
    int i;
    for (i = 0; i < x; i++)
        printf ("%d%c", *(p + i), i != (x - 1) ? ' ' : '\n');
}

