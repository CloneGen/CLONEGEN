int main () {
    int m, n, h = 1, v = 0, i, j;
    int array [100] [100];
    while (cin >> m >> n) {
        memset (array, 0, sizeof (array));
        for (i = 1; i <= m; i++)
            for (j = 1; j <= n; j++)
                cin >> array[i][j];
        h = 1;
        v = 0;
        while (m > 0 && n > 0) {
            if (m != 1 && n != 1) {
                for (i = 1; i <= n; i++) {
                    v++;
                    cout << array[h][v] << endl;
                }
                for (i = 1; i <= m - 1; i++) {
                    h++;
                    cout << array[h][v] << endl;
                }
                for (i = 1; i <= n - 1; i++) {
                    v--;
                    cout << array[h][v] << endl;
                }
                for (i = 1; i <= m - 2; i++) {
                    h--;
                    cout << array[h][v] << endl;
                }
                m = m - 2;
                n = n - 2;
            }
            else if (m == 1) {
                for (i = 1; i <= n; i++) {
                    v++;
                    cout << array[h][v] << endl;
                }
                m = m - 2;
                n = n - 2;
            }
            else {
                v++;
                for (i = 1; i <= m; i++) {
                    cout << array[h][v] << endl;
                    h++;
                }
                m = m - 2;
                n = n - 2;
            }
        }
    }
    return 0;
}

