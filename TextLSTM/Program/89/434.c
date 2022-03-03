int main () {
    int n, i = 0, j, k = 0;
    cin >> n;
    int a [100000] [2];
    int x [n];
    int y [n];
    memset (x, 0, sizeof (x));
    memset (y, 0, sizeof (y));
    for (i = 0; i < 100000; i++) {
        for (j = 0; j < 2; j++)
            cin >> a[i][j];
        if ((a[i][0] == 0) && (a[i][1] == 0))
            break;
        k++;
    }
    for (i = 0; i < k; i++) {
        x[a[i][0]]++;
        y[a[i][1]]++;
    }
    int *p = NULL, *q = NULL;
    q = y;
    i = 0;
    for (p = x;; p++) {
        if (i == n) {
            cout << "NOT FOUND";
            break;
        }
        if ((*p == 0) && (*q == n - 1)) {
            cout << i;
            break;
        }
        i++;
        q++;
    }
    return 0;
}

