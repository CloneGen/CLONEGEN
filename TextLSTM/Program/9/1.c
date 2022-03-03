int main () {
    char str [100] [100];
    int s1 [100], sz [100], t [100];
    int n, i, p, k;
    scanf ("%d", &n);
    int j = 0;
    for (i = 0; i < n; i++) {
        scanf ("%s %d", str[i], &sz[i]);
        if (sz[i] >= 60) {
            t[j] = i;
            s1[j] = sz[i];
            j++;
        }
    }
    for (k = 1; k <= j; k++) {
        for (p = 0; p < j - k; p++) {
            if (s1[p] < s1[p + 1]) {
                int e, f;
                e = s1[p + 1];
                s1[p + 1] = s1[p];
                s1[p] = e;
                f = t[p + 1];
                t[p + 1] = t[p];
                t[p] = f;
            }
        }
    }
    for (p = 0; p < j; p++) {
        printf ("%s\n", str[t[p]]);
    }
    for (i = 0; i < n; i++) {
        if (sz[i] < 60)
            printf ("%s\n", str[i]);
    }
    return 0;
}

