int main () {
    int i, j, a, b, t [100] [100], q = 0, s;
    scanf ("%d%d", &a, &b);
    s = a * b;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            scanf ("%d", &t[i][j]);
    i = q;
    while (s != 0) {
        for (j = q; j < b; j++) {
            if (s == 0)
                break;
            printf ("%d\n", t[i][j]);
            s--;
        }
        j--;
        for (i = i + 1; i < a; i++) {
            if (s == 0)
                break;
            printf ("%d\n", t[i][j]);
            s--;
        }
        i--;
        for (j = b - 2; j >= q; j--) {
            if (s == 0)
                break;
            printf ("%d\n", t[i][j]);
            s--;
        }
        j++;
        for (i = a - 2; i >= q + 1; i--) {
            if (s == 0)
                break;
            printf ("%d\n", t[i][j]);
            s--;
        }
        i++;
        q++;
        a--;
        b--;
    }
    getchar ();
    getchar ();
}

