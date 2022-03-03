int main () {
    int a [20] [20], i, j, b [20], s, n = 0, k;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 16; j++) {
            cin >> a[i][j];
            if (a[i][0] == -1)
                break;
            if (a[i][j] == 0) {
                b[i] = j;
                break;
            }
        }
        if (a[i][0] == -1)
            break;
    }
    s = i;
    for (i = 0; i < s; i++) {
        for (j = 0; j < b[i]; j++) {
            for (k = j + 1; k < b[i]; k++) {
                if (((a[i][j] % a[i][k] == 0) && (a[i][j] / a[i][k] == 2)) || ((a[i][k] % a[i][j] == 0) && (a[i][k] / a[i][j] == 2)))
                    n = n + 1;
            }
        }
        cout << n << endl;
        n = 0;
    }
    return 0;
}

