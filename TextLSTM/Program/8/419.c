void sort1 (int str1 [], int m) {
    int t, i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < m - i - 1; j++) {
            if (str1[j] > str1[j + 1]) {
                t = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = t;
            }
        }
    }
}

void sort2 (int str2 [], int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str2[j] > str2[j + 1]) {
                t = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = t;
            }
        }
    }
}

void order (int str1 [], int str2 [], int m, int n) {
    int i;
    for (i = m; i < m + n; i++)
        str1[i] = str2[i - m];
    for (i = 0; i < m + n - 1; i++) {
        printf ("%d ", str1[i]);
    }
    printf ("%d", str1[m + n - 1]);
}

void main () {
    int str1 [30], str2 [30];
    int i, m, n;
    scanf ("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        scanf ("%d", &str1[i]);
    for (i = 0; i < n; i++)
        scanf ("%d", &str2[i]);
    sort1 (str1, m);
    sort2 (str2, n);
    order (str1, str2, m, n);
    printf ("\n");
}

