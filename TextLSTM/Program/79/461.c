int main () {
    int n, m, s, i;
    scanf ("%d %d", &n, &m);
    while (n != 0) {
        s = 0;
        for (i = 2; i <= n; i++)
            s = (s + m) % i;
        printf ("%d\n", s + 1);
        scanf ("%d %d", &n, &m);
    }
    getchar ();
    getchar ();
    getchar ();
}

