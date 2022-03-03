int main () {
    int n, k;
    cin >> n;
    for (k = 1; k <= n; k++) {
        int a [n] [n], i, j, sum = 0;
        int min [n], liemin [n];
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        for (i = 0; i < n; i++)
            min[i] = a[i][0];
        for (i = 0; i < n; i++)
            liemin[i] = a[0][i];
        int scale = n;
        while (scale > 1) {
            for (i = 0; i < scale; i++)
                for (j = 0; j < scale; j++) {
                    if (a[i][j] < min[i])
                        min[i] = a[i][j];
                }
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] - min[i];
            for (j = 0; j < scale; j++)
                for (i = 0; i < scale; i++) {
                    if (a[i][j] < liemin[j])
                        liemin[j] = a[i][j];
                }
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] - liemin[j];
            sum = sum + a[1][1];
            for (i = 0; i < scale; i++)
                for (j = 1; j < scale; j++)
                    a[i][j] = a[i][j + 1];
            for (j = 0; j < scale; j++)
                for (i = 1; i < scale; i++)
                    a[i][j] = a[i + 1][j];
            scale = scale - 1;
            for (i = 0; i < scale; i++)
                min[i] = a[i][0];
            for (i = 0; i < scale; i++)
                liemin[i] = a[0][i];
        }
        cout << sum << endl;
    }
    return 0;
}

