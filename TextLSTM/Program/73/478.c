int main () {
    int a [5] [5], i, j, max, min, l, k, flag = 0;
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
            cin >> a[i][j];
    for (i = 0; i <= 4; i++) {
        max = INT_MIN;
        min = INT_MAX;
        for (j = 0; j <= 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                l = j;
            }
        }
        for (k = 0; k <= 4; k++) {
            if (a[k][l] < min)
                min = a[k][l];
        }
        if (a[i][l] == min) {
            cout << i + 1 << " " << l + 1 << " " << a[i][l] << '\n';
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "not found" << '\n';
    return 0;
}

