void pdjsc (char c [100]) {
    int i, j, k, l, m, n, p = 0;
    char tp, a, b;
    l = strlen (c) - 1;
    for (i = 0; i <= l; i++) {
        if (c[i] == c[l - i])
            continue;
        else {
            p = 1;
            break;
        }
    }
    if (p == 0)
        printf ("%s\n", c);
}

int main () {
    int i, j, k, l, n, m, p = 0;
    char tp, a, b;
    char c [100] = {' '};
    char s [100] = {' '};
    scanf ("%s", s);
    l = strlen (s) - 1;
    for (i = 1; i <= l; i++)
        for (j = 0; j <= l - i; j++) {
            for (k = 0; k <= i; k++)
                c[k] = s[k + j];
            pdjsc (c);
        }
    return 7;
}

