void main () {
    int i = 0, a [300] = {0}, j, k, p = 0;
    for (i = 0; i < 300; i++) {
        if (i == 0) {
            scanf ("%d", &a[i]);
        }
        else {
            scanf (",%d", &a[i]);
        }
    }
    if (a[1] != 0) {
        for (i = 0; i <= 300; i++) {
            for (j = 0; j < 299 - i; j++) {
                if (a[j] < a[j + 1]) {
                    k = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = k;
                }
            }
        }
        i = 0;
        j = 1;
        k = 0;
        for (k = 0; k < 300; k++) {
            p = p + a[k];
            if (a[k] != 0) {
                i++;
            }
        }
        j = a[0] * i;
        i = 0;
        k = 0;
        while (k < 300) {
            if (a[i] == a[i + 1]) {
                i++;
            }
            k++;
        }
        if (p != j) {
            printf ("%d\n", a[i + 1]);
        }
        else {
            printf ("No\n");
        }
    }
    else
        printf ("No\n");
}

