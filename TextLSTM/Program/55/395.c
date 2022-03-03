int main () {
    int a, b, x, m, l, g, i, j, k, y, z;
    char c [40];
    scanf ("%d %s %d", &a, c, &b);
    l = strlen (c);
    if (c[0] == '0')
        printf ("0\n");
    else {
        for (i = 0; i < l; i++)
            if (c[i] >= 'A' && c[i] <= 'Z')
                c[i] = c[i] - 'A' + 'a';
        x = 0;
        int d [40];
        for (i = 0; i < l; i++) {
            if (c[i] >= 'a')
                c[i] = c[i] - 'a' + 10;
            else
                c[i] = c[i] - '0';
            d[i] = 1;
            for (j = l - i; j > 1; j--)
                d[i] = d[i] * a;
            x = x + d[i] * c[i];
        }
        char e [40];
        for (k = 0; x != 0; k++) {
            e[k] = x % b;
            x = x / b;
        }
        e[k] = '\0';
        char f [40];
        for (y = 0; y < k; y++) {
            if (e[y] < 10)
                f[k - 1 - y] = e[y] + '0';
            else
                f[k - 1 - y] = e[y] - 10 + 'A';
        }
        f[k] = '\0';
        printf ("%s", f);
    }
}

