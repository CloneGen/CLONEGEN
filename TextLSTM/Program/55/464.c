void main () {
    long n;
    int jz1, jz2;
    int wei1, wei2;
    int i, j;
    char a [35] = {0}, b [35];
    char t;
    scanf ("%d %s %d", &jz1, a, &jz2);
    if (a[0] == '0')
        printf ("0\n");
    else {
        for (i = 0; a[i] != 0; i++)
            ;
        wei1 = i - 1;
        for (i = 0; i <= wei1; i++) {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] -= 'a' - 10;
            else if (a[i] >= 'A' && a[i] <= 'Z')
                a[i] -= 'A' - 10;
            else
                a[i] -= '0';
        }
        for (j = wei1, i = 0, n = 0; i <= wei1; i++, j--)
            n += pow (jz1, j) * a[i];
        for (i = 0; n != 0; i++) {
            b[i] = n % jz2;
            n /= jz2;
        }
        wei2 = i - 1;
        for (i = 0; i <= wei2 / 2; i++) {
            t = b[i];
            b[i] = b[wei2 - i];
            b[wei2 - i] = t;
        }
        b[wei2 + 1] = 0;
        for (i = 0; i <= wei2; i++) {
            if (b[i] >= 10)
                b[i] += 'A' - 10;
            else
                b[i] += '0';
        }
        puts (b);
    }
}

