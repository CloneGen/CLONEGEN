int main () {
    int a [6] [6], i, j, k, l = 0, b, max;
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
            cin >> a[i][j];
    for (k = 0; k <= 4; k++) {
        max = a[k][0];
        b = 0;
        for (j = 1; j <= 4; j++) {
            if (a[k][j] > max) {
                max = a[k][j];
                b = j;
            }
        }
        if (max <= a[0][b] && max <= a[1][b] && max <= a[2][b] && max <= a[3][b] && max <= a[4][b]) {
            cout << k + 1 << " " << b + 1 << " " << max << endl;
            l++;
        }
    }
    if (l == 0)
        cout << "not found" << endl;
    return 0;
}

