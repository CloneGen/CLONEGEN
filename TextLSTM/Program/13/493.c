int main () {
    int n, i, j, k, js, cunzai;
    scanf ("%d", &n);
    int *a = (int *) malloc (sizeof (int) * n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("%d", a[0]);
    for (i = 1; i < n; i++) {
        cunzai = 0;
        js = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j])
                js++;
        }
        if (js == 0) {
            printf (" %d", a[i]);
        }
    }
    return 0;
}

