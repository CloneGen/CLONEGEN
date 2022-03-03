int main () {
    int a [5] [5] = {0}, b = 0, i = 0, j = 0, k = 0, g, m = 0;
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++) {
            cin >> b;
            a[i][j] = b;
        }
    for (i = 0; i <= 4; i++) {
        int c = -1, max = -1e10;
        for (j = 0; j <= 4; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                c = j;
            }
        }
        for (k = 0; k <= 4; k++) {
            g = -1;
            if (max > a[k][c]) {
                g = 0;
                break;
            }
        }
        int row = -1;
        if (g == -1) {
            row = i;
            m = 1;
            cout << row + 1 << " " << c + 1 << " " << max << endl;
        }
    }
    if (m == 0)
        cout << "not found" << endl;
    return 0;
}

