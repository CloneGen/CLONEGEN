int main () {
    int i, j, n, a [200] [3], b [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, c [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, x, y, z;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        if ((a[i][0] % 4 == 0 && a[i][0] % 100 != 0) || a[i][0] % 400 == 0) {
            if (a[i][1] > a[i][2]) {
                x = a[i][1];
                y = a[i][2];
            }
            else {
                x = a[i][2];
                y = a[i][1];
            }
            z = 0;
            for (j = (y - 1); j < (x - 1); j++) {
                z = z + c[j];
            }
            if (z % 7 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            if (a[i][1] > a[i][2]) {
                x = a[i][1];
                y = a[i][2];
            }
            else {
                x = a[i][2];
                y = a[i][1];
            }
            z = 0;
            for (j = (y - 1); j < (x - 1); j++) {
                z = z + b[j];
            }
            if (z % 7 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

