int change (char *str, int *a) {
    int len = strlen (str);
    for (int i = 0;
    i < len; i++)
        a[len - i - 1] = str[i] - '0';
    return len;
}

void printnum (int *a, int len) {
    int k = len - 1;
    while (*(a + k) == 0 && k > 0) {
        k--;
    }
    for (int i = k;
    i >= 0; i--)
        cout << *(a + i);
}

int jiafa (int *a, int alen, int *b, int blen, int *c) {
    int len = (alen > blen) ? alen : blen;
    for (int i = 0;
    i < len; i++) {
        c[i] = 0;
        if (i < alen)
            c[i] += a[i];
        if (i < blen)
            c[i] += b[i];
    }
    c[len] = 0;
    for (int i = 0;
    i < len; i++)
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] = c[i] % 10;
        }
    return c[len] ? (len + 1) : len;
}

int main () {
    char n1 [251], n2 [251];
    int a [251], b [251], c [251], alen, blen, clen;
    cin.getline (n1, 251);
    cin.getline (n2, 251);
    alen = change (n1, a);
    blen = change (n2, b);
    clen = jiafa (a, alen, b, blen, c);
    printnum (c, clen);
    return 0;
}

