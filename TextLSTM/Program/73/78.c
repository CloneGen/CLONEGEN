int main () {
    int a [5] [5];
    int i, j, k, t, x, y, m = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    for (i = 0; i < 5; i++) {
        x = 0;
        y = 0;
        t = a[i][0];
        for (j = 0; j < 4; j++) {
            if (t < a[i][j + 1]) {
                t = a[i][j + 1];
                y = j + 1;
            }
        }
        for (k = 0; k < 5; k++) {
            if (t > a[k][y])
                break;
        }
        if (k == 5) {
            x = i;
            cout << x + 1 << ' ' << y + 1 << ' ' << t << endl;
            m = 1;
        }
    }
    if (m == 0)
        cout << "not found" << endl;
    return 0;
}

