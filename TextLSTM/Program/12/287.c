int main () {
    int a [15];
    int i, NO, tmp, n, j;
    while (1) {
        n = 0;
        scanf ("%d", &tmp);
        a[0] = tmp;
        if (tmp == -1)
            break;
        NO = 0;
        while (1) {
            scanf ("%d", &tmp);
            if (tmp == 0)
                break;
            a[++n] = tmp;
        }
        for (i = 0; i < n; i++)
            for (j = i + 1; j <= n; j++)
                if (a[j] == 2 * a[i] || a[i] == 2 * a[j])
                    NO++;
        printf ("%d\n", NO);
    }
    getchar ();
    getchar ();
}

