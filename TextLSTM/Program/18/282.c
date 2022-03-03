int sum (int [] [101], int);

int main () {
    int n, i, j, k;
    int a [101] [101];
    cin >> n;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        cout << sum (a, n) << endl;
    }
    return 0;
}

int sum (int a [] [101], int n) {
    int i, j, temp, min;
    for (i = 0; i < n; i++) {
        min = a[i][0];
        for (j = 0; j < n; j++)
            if (a[i][j] < min)
                min = a[i][j];
        for (j = 0; j < n; j++)
            a[i][j] -= min;
    }
    for (j = 0; j < n; j++) {
        min = a[0][j];
        for (i = 0; i < n; i++)
            if (a[i][j] < min)
                min = a[i][j];
        for (i = 0; i < n; i++)
            a[i][j] -= min;
    }
    temp = a[1][1];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (i == 0 && j > 0)
                a[i][j] = a[i][j + 1];
            if (j == 0 && i > 0)
                a[i][j] = a[i + 1][j];
            if (i > 0 && j > 0)
                a[i][j] = a[i + 1][j + 1];
        }
    if (n == 1)
        return 0;
    else
        return temp + sum (a, n - 1);
}

