int main () {
    int a [5] [5], i, j, max = 0, min = 0, pa [5], pi [5], s = 0;
    for (i = 0; i < 5; i++) {
        max = 0;
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] >= max) {
                max = a[i][j];
                pa[i] = j;
            }
        }
    }
    for (j = 0; j < 5; j++) {
        min = a[0][j];
        for (i = 0; i < 5; i++) {
            if (a[i][j] <= min) {
                min = a[i][j];
                pi[j] = i;
            }
        }
    }
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            if (j == pa[i] && i == pi[j]) {
                cout << i + 1 << " " << j + 1 << " ";
                cout << a[i][j] << endl;
                s = 1;
            }
        }
    if (s == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

