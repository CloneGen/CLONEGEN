int main () {
    int k, i, j, t, d [25], h [25];
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d", &h[i]);
    }
    for (i = 0; i < k; i++) {
        t = 0;
        for (j = 0; j < i; j++) {
            if (h[j] >= h[i]) {
                if (d[j] > t)
                    t = d[j];
            }
        }
        d[i] = t + 1;
    }
    for (i = 0; i < k; i++) {
        if (d[i] > t)
            t = d[i];
    }
    printf ("%d\n", t);
    return 0;
}

