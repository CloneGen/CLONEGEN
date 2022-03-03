void main () {
    char c [101], s [101], temp;
    int i, j, k, t, y;
    gets (c);
    for (i = 0;; i++) {
        if (c[i] == '\0')
            break;
    }
    for (j = 0; j < i; j++)
        s[j] = c[i - 1 - j];
    s[j] = '\0';
    j = -1;
    k = -1;
    for (i = 0;; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            j = k;
            k = i;
            for (t = j + 1, y = k - 1; y > t; t++, y--) {
                temp = s[y];
                s[y] = s[t];
                s[t] = temp;
            }
        }
        if (s[i] == '\0')
            break;
    }
    printf ("%s\n", s);
}

