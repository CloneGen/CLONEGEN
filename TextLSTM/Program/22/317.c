void main () {
    int n, a [300], i, j, temp, k = 0;
    char b [300];
    i = 0;
    for (i = 0;; i++) {
        scanf ("%d", &a[i]);
        scanf ("%c", &b[i]);
        n = i + 1;
        if (b[i] != '\n')
            continue;
        else
            break;
    }
    if (n == 0)
        printf ("No\n");
    if (n > 0) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        temp = a[n - 1];
        if (a[0] == temp)
            printf ("No\n");
        else {
            for (i = n - 1; i >= 0; i--) {
                if (a[i] != temp) {
                    k = i;
                    break;
                }
            }
            printf ("%d\n", a[k]);
        }
    }
}

