int main () {
    int n, i, t, m1, m2;
    m1 = m2 = ~((unsigned) -1 >> 1);
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &t);
        if (t > m1) {
            m2 = m1;
            m1 = t;
        }
    }
    printf ("%d\n%d", m1, m2);
    return 0;
}

