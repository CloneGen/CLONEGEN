void main () {
    char a;
    int x [300] = {0}, i, m, n, k;
    scanf ("%d", &x[0]);
    scanf ("%c", &a);
    for (i = 1; a == ','; i++) {
        scanf ("%d", &x[i]);
        scanf ("%c", &a);
    }
    i = i - 1;
    if (i >= 1) {
        for (n = 0; n <= i; n++) {
            for (m = n; m <= i; m++) {
                if (x[n] < x[m]) {
                    k = x[m];
                    x[m] = x[n];
                    x[n] = k;
                }
            }
        }
        for (m = 0; m <= i; m++) {
            if (x[m] != x[m + 1])
                break;
        }
        if (m < i)
            printf ("%d", x[m + 1]);
        else
            printf ("No");
    }
    else
        printf ("No");
}

