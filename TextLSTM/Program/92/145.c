main () {
    int a [1000], b [1000], m, n, i, j, k1, k2, sum;
    for (;;) {
        sum = 0;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++) {
            scanf ("%d", &a[i]);
        }
        for (i = 0; i < n; i++) {
            scanf ("%d", &b[i]);
        }
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - 1 - i; j++) {
                if (a[j] < a[j + 1]) {
                    m = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = m;
                }
            }
        }
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - 1 - i; j++) {
                if (b[j] < b[j + 1]) {
                    m = b[j + 1];
                    b[j + 1] = b[j];
                    b[j] = m;
                }
            }
        }
        i = 0;
        j = 0;
        k1 = n - 1;
        k2 = n - 1;
        for (; i <= k1 && j <= k2; j++) {
            if (a[i] > b[j]) {
                i++;
                sum++;
            }
            else if (a[i] < b[j]) {
                k1--;
                sum--;
            }
            else {
                if (a[k1] < b[k2]) {
                    k1--;
                    sum--;
                }
                else if (a[k1] > b[k2]) {
                    j--;
                    k1--;
                    k2--;
                    sum++;
                }
                else {
                    if (a[k1] == b[j]) {
                        k1--;
                    }
                    else {
                        k1--;
                        sum--;
                    }
                }
            }
        }
        sum = sum * 200;
        printf ("%d\n", sum);
    }
}

