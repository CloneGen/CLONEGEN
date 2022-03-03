int n, x [10100], y [10100];
char s [101000];
int ans, best;
int v [10100];

int main () {
    gets (s);
    n = 1;
    memset (x, 0, sizeof (x));
    memset (y, 0, sizeof (y));
    for (int i = 0;
    s[i]; i++) {
        if (s[i] == ',')
            n++;
        else
            x[n] = x[n] * 10 + s[i] - 48;
    }
    gets (s);
    n = 1;
    for (int i = 0;
    s[i]; i++) {
        if (s[i] == ',')
            n++;
        else
            y[n] = y[n] * 10 + s[i] - 48;
    }
    memset (v, 0, sizeof (v));
    for (int i = 1;
    i <= n; i++)
        for (int j = x[i];
        j < y[i]; j++) {
            v[j]++;
            if (v[j] > best)
                best = v[j];
        }
    printf ("%d %d\n", n, best);
}

