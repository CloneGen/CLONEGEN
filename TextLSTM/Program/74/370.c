int xp (int a) {
    int s = 1, i;
    for (i = 1; i <= a; i++) {
        s = 10 * s;
    }
    return (s);
}

int circle (int s) {
    int i = 0, a [100], s1 = 0, s2 = 0, n;
    int xp (int a);
    while (s >= 10) {
        a[i] = s % 10;
        s = (s - a[i]) / 10;
        i++;
    }
    a[i] = s;
    n = i + 1;
    for (i = 0; i <= n - 1; i++) {
        s1 = s1 + xp (i) * a[i];
        s2 = s2 + xp (n - 1 - i) * a[i];
    }
    if (s1 == s2) {
        return (s1);
    }
    else
        return -1;
}

int main () {
    int m, n, i, yn = 1, k, a [1000], counter = 0;
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        yn = 1;
        for (k = 2; k <= i - 1; k++) {
            if (i % k == 0) {
                yn = 0;
            }
        }
        if (yn == 1) {
            if (circle (i) != -1) {
                counter = counter + 1;
                a[counter] = circle (i);
            }
        }
    }
    if (counter != 0) {
        for (i = 1; i <= counter - 1; i++) {
            printf ("%d,", a[i]);
        }
        printf ("%d", a[counter]);
    }
    else
        printf ("no");
    return 0;
}

