int main () {
    int i, j, k = 0, m, n, sum [500] = {0};
    char b [600], a [510] [5], c [5];
    scanf ("%d", &n);
    getchar ();
    gets (b);
    m = strlen (b);
    for (i = 0; i <= m - n; i++) {
        for (j = i; j < i + n; j++) {
            a[k][j - i] = b[j];
        }
        a[k][j] = '\0';
        k += 1;
    }
    for (i = 0; i < k; i++) {
        for (j = i; j < k; j++) {
            for (m = 0; m < n; m++) {
                if (a[i][m] != a[j][m]) {
                    m = 0;
                    break;
                }
            }
            if (m != 0) {
                sum[i] += 1;
            }
        }
    }
    for (i = 0; i < k - 1; i++) {
        for (j = 0; j < k - i - 1; j++) {
            if (sum[j] < sum[j + 1]) {
                m = sum[j + 1];
                sum[j + 1] = sum[j];
                sum[j] = m;
                strcpy (c, a[j]);
                strcpy (a[j], a[j + 1]);
                strcpy (a[j + 1], c);
            }
        }
    }
    if (sum[0] != 1) {
        printf ("%d\n", sum[0]);
        for (i = 0; i < k; i++) {
            if (sum[i] < sum[0]) {
                break;
            }
            else {
                printf ("%s\n", a[i]);
            }
        }
    }
    else {
        printf ("NO");
    }
    return 0;
}

