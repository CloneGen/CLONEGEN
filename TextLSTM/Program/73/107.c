int main () {
    int i, j, k, m, N;
    int max, min;
    int a [5] [5];
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    for (i = 0, N = 0; i < 5; i++) {
        max = a[i][0];
        k = 0;
        for (j = 1; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                k = j;
            }
        }
        min = a[0][k];
        m = 0;
        for (j = 1; j < 5; j++) {
            if (min > a[j][k]) {
                min = a[j][k];
                m = j;
            }
        }
        if (m == i) {
            cout << i + 1 << ' ' << k + 1 << ' ' << a[i][k] << endl;
            N++;
        }
    }
    if (N == 0)
        cout << "not found" << endl;
    return 0;
}

