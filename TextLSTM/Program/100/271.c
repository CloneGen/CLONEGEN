int main () {
    int i, j, n, m, k, l;
    char c, a [300], b [300];
    c = getchar ();
    i = 0;
    j = 0;
    l = 0;
    while (c != '\n') {
        if (c >= 'A' && c <= 'Z') {
            a[i] = c;
            i++;
            l++;
        }
        if (c >= 'a' && c <= 'z') {
            b[j] = c;
            j++;
            l++;
        }
        c = getchar ();
    }
    m = i;
    n = j;
    for (i = 65; i <= 90; i++) {
        for (j = 0, k = 0; j < m; j++) {
            if (a[j] == i)
                k++;
        }
        if (k != 0)
            printf ("%c=%d\n", i, k);
    }
    for (i = 97; i <= 122; i++) {
        for (j = 0, k = 0; j < n; j++) {
            if (b[j] == i)
                k++;
        }
        if (k != 0)
            printf ("%c=%d\n", i, k);
    }
    if (l == 0)
        printf ("No\n");
    return 0;
}

