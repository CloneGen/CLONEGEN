void main () {
    int n, lena, lens, i, j, k;
    char str [100], a [100], *pa, *ps, e [20], *p;
    scanf ("%d", &n);
    gets (e);
    for (i = 1; i <= n; i++) {
        gets (str);
        gets (a);
        gets (e);
        lens = strlen (str);
        lena = strlen (a);
        pa = a + lena - 1;
        ps = str + lens - 1;
        for (; pa >= a; pa--, ps--) {
            if (*ps >= *pa)
                *ps = *ps - *pa + 48;
            else {
                *ps = *ps - *pa + 58;
                p = ps - 1;
                while (*p == 0) {
                    *p = 57;
                    p--;
                }
                *p = *p - 1;
            }
        }
        for (k = 0; k <= lens - 1; k++) {
            if (str[i] != 0)
                break;
        }
        for (j = k; j < lens - 1; j++)
            printf ("%c", str[j]);
        printf ("%c\n", str[lens - 1]);
    }
}

