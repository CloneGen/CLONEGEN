int main () {
    int n, i, j, lena, lenb, m, p;
    char a [110], b [110], t;
    scanf ("%d\n", &n);
    for (; n > 0; n--) {
        gets (a);
        gets (b);
        lena = strlen (a);
        lenb = strlen (b);
        for (i = 0; i < lenb / 2; i++) {
            t = b[i];
            b[i] = b[lenb - i - 1];
            b[lenb - i - 1] = t;
        }
        for (i = 0; i < lena / 2; i++) {
            t = a[i];
            a[i] = a[lena - i - 1];
            a[lena - i - 1] = t;
        }
        for (i = 0; i < lenb; i++) {
            if (a[i] >= b[i])
                a[i] = '0' + a[i] - b[i];
            else {
                j = i + 1;
                while (a[j] == '0') {
                    a[j] = '9';
                    j++;
                }
                a[j] -= 1;
                a[i] = a[i] + 10 - b[i] + '0';
            }
        }
        for (i = lena - 1; i >= 0; i--)
            if (a[i] != '0')
                break;
        for (j = i; j >= 0; j--)
            printf ("%c", a[j]);
        printf ("\n");
        gets (a);
    }
}

