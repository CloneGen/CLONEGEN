int main () {
    char a [900];
    gets (a);
    strcat (a, " ");
    int m = 0, c [50], b [50], n = 0, i;
    for (i = 0; i < strlen (a); i++) {
        if (a[i] == ' ') {
            c[n] = i - m;
            b[n] = i;
            m = i;
            n++;
        }
    }
    int x, y;
    x = 0;
    y = 0;
    for (i = 0; i < n; i++) {
        if (c[i] <= c[x]) {
            x = i;
        }
        if (c[i] >= c[y]) {
            y = i;
        }
    }
    if (y == 0) {
        for (i = 0; i < b[y]; i++) {
            printf ("%c", a[i]);
        }
    }
    else {
        for (i = b[y] - c[y] + 1; i < b[y]; i++) {
            printf ("%c", a[i]);
        }
    }
    printf ("\n");
    if (x == 0) {
        for (i = 0; i < b[x]; i++) {
            printf ("%c", a[i]);
        }
    }
    else {
        for (i = b[x] - c[x] + 1; i < b[x]; i++) {
            printf ("%c", a[i]);
        }
    }
    return 0;
}

