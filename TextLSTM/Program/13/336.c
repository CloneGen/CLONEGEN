int main () {
    int c, a [20000], n, i, l = 0, p, k = 0, j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        l = 0;
        scanf ("%d", &c);
        for (j = 0; j < k; j++) {
            if (c == a[j])
                l = l + 1;
        }
        if (l == 0) {
            a[k] = c;
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        if (i == 0)
            printf ("%d", a[i]);
        else {
            printf (" %d", a[i]);
        }
    }
    getchar ();
    getchar ();
}

