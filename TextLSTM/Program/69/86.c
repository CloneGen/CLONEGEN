int str2bigint (char *str, int *a) {
    int len = (int) strlen (str);
    int i;
    for (i = 0; i < len; i++)
        a[len - i - 1] = str[i] - '0';
    return len;
}

void print_bigint (int *a, int len) {
    int k = len - 1;
    int i;
    while (a[k] == 0 && k > 0)
        k--;
    for (i = k; i >= 0; i--)
        printf ("%d", a[i]);
    printf ("\n");
}

int add_bigint (int *a, int alen, int *b, int blen, int *c) {
    int i;
    int len = (alen > blen) ? alen : blen;
    for (i = 0; i < len; i++) {
        c[i] = 0;
        if (i < alen)
            c[i] += a[i];
        if (i < blen)
            c[i] += b[i];
    }
    c[len] = 0;
    for (i = 0; i < len; i++) {
        if (c[i] >= 0) {
            c[i + 1] += c[i] / 10;
            c[i] = c[i] % 10;
        }
    }
    return c[len] ? (len + 1) : len;
}

int main () {
    int n;
    char s1 [MAX +1], s2 [MAX +1];
    int a [MAX +1], b [MAX +1], c [MAX +1];
    int alen, blen, clen;
    scanf ("%s %s", s1, s2);
    alen = str2bigint (s1, a);
    blen = str2bigint (s2, b);
    clen = add_bigint (a, alen, b, blen, c);
    print_bigint (c, clen);
    return 0;
}

