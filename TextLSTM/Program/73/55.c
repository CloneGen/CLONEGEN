int main () {
    int a [7] [7], i, j, k, flag, max, maxj;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        max = a[i][0];
        maxj = 0;
        flag = 1;
        for (j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxj = j;
            }
        }
        for (k = 0; k < 5; k++) {
            if (a[k][maxj] < max) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << i + 1 << " " << maxj + 1 << " " << a[i][maxj] << endl;
            break;
        }
    }
    if (!flag)
        cout << "not found" << endl;
    return 0;
}

