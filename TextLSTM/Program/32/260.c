void main () {
    char a [20] [101], b [20] [101], c [20] [101];
    int w, x, i, m, carry, lena [20], lenb [20], jump;
    scanf ("%d", &w);
    for (x = 0; x < w; x++) {
        scanf ("%s", a[x]);
        lena[x] = strlen (a[x]);
        scanf ("%s", b[x]);
        lenb[x] = strlen (b[x]);
    }
    for (x = 0; x < w; x++) {
        a[x][100] = '\0';
        jump = 99 - lena[x];
        for (m = lena[x]; m > 0; m--)
            a[x][m + jump] = a[x][m - 1];
        b[x][100] = '\0';
        jump = 99 - lenb[x];
        for (m = lenb[x]; m > 0; m--)
            b[x][m + jump] = b[x][m - 1];
        carry = 0;
        for (m = 99; m > 99 - lenb[x]; m--)
            if (a[x][m] - carry < b[x][m]) {
                c[x][m] = a[x][m] - b[x][m] + 10 - carry + '0';
                carry = 1;
            }
            else {
                c[x][m] = a[x][m] - b[x][m] - carry + '0';
                carry = 0;
            }
        c[x][99 - lenb[x]] = a[x][99 - lenb[x]] - carry;
        for (m = 98 - lenb[x]; m > 99 - lena[x]; m--)
            c[x][m] = a[x][m];
        for (m = 99 - lena[x] + 1; m < 100; m++)
            printf ("%c", c[x][m]);
        printf ("\n");
    }
}

