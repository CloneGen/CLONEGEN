int main () {
    int n, m, i, j, arr [8] [8], arr_ [8], arr__ [8], a, b, c = 0, arr_1 [8], arr__1 [8];
    scanf ("%d,%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        a = i;
        b = 0;
        for (j = 1; j < m; j++) {
            if (arr[i][j] > arr[a][b]) {
                a = i;
                b = j;
            }
        }
        arr_[i] = a;
        arr__[i] = b;
    }
    for (j = 0; j < m; j++) {
        a = 0;
        b = j;
        for (i = 1; i < n; i++) {
            if (arr[i][j] < arr[a][b]) {
                a = i;
                b = j;
            }
        }
        arr_1[j] = a;
        arr__1[j] = b;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if ((arr_[i] == arr_1[j]) && (arr__[i] == arr__1[j])) {
                printf ("%d+%d", arr_[i], arr__[i]);
            }
            else {
                c++;
            }
        }
    }
    if (c == m * n) {
        printf ("No");
    }
    return 0;
}

