int main () {
    int a [5] [5], i, j, k, m = 0, n = 0, flag = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i][j + 1] > a[i][m])
                m = j + 1;
        }
        for (k = 0; k < 5; k++) {
            if (a[k][m] < a[i][m]) {
                break;
            }
            else
                n = 1;
        }
        if (k == 5) {
            flag = 1;
            cout << i + 1 << " " << m + 1 << " " << a[i][m] << endl;
        }
        m = 0;
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

