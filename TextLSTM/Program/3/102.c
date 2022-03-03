int main () {
    int a [1000];
    int i, j, n, k;
    int l = 0;
    int swap;
    scanf ("%d", &n);
    scanf ("%d", &k);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                printf ("yes");
                return 0;
            }
        }
    }
    printf ("no");
    return 0;
}

