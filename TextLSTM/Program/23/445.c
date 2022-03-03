void main () {
    int i, j, k, p, q;
    char s [100], a [100] [100];
    gets (s);
    for (i = 0, j = 0; s[i] != '\0'; i++, j++) {
        p = i;
        k = 0;
        while (s[i] != ' ' && s[i] != '\0') {
            a[j][i - p] = s[i];
            i++;
            k = 1;
        }
        if (k == 1) {
            a[j][i - p] = '\0';
            if (s[i] == '\0')
                i--;
        }
        else
            j--;
    }
    for (q = j - 1; q > 0; q--)
        printf ("%s ", a[q]);
    printf ("%s\n", a[0]);
}

