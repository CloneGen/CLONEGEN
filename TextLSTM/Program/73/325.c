int main () {
    int a [5] [5], i, j, max, maxc, p, record;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    for (i = 0; i < 5; i++) {
        max = 0;
        record = 0;
        for (j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxc = j;
            }
        }
        for (p = 0; p < 5; p++) {
            if (p == i)
                continue;
            if (a[p][maxc] < a[i][maxc]) {
                record = 1;
                break;
            }
        }
        if (record == 0) {
            cout << i + 1 << " " << maxc + 1 << " " << max;
            break;
        }
    }
    if (record == 1)
        cout << "not found";
    return 0;
}

