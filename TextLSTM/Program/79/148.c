void main () {
    int n [100], m [100], i, j = 0, s [100] = {0};
    for (i = 0;; i++) {
        scanf ("%d", &n[i]);
        scanf ("%d", &m[i]);
        if (n[i] == 1)
            s[i] = 0;
        if (m[i] == 1)
            s[i] = n[i] - 1;
        if (n[i] > 1 && m[i] > 1) {
            for (j = 2; j <= n[i]; j++) {
                s[i] = (s[i] + m[i]) % j;
            }
        }
        if (n[i] == 0 && m[i] == 0)
            break;
    }
    for (i = 0; n[i] != 0; i++) {
        printf ("%d\n", s[i] + 1);
    }
}

