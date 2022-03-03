int main () {
    int i, j, n, a [100] [20], b [100] = {0}, c [100], d [100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> b[i];
        for (j = 0; j < b[i]; j++)
            cin >> a[i][j];
    }
    for (i = 0; i < n; i++) {
        d[i] = b[i];
        c[i] = a[i][b[i] - 1];
        for (j = 0; j < b[i]; j++) {
            if (a[i][j] + j * 3 > 60) {
                c[i] = a[i][j - 1];
                d[i] = j;
                break;
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (b[i] == 0)
            cout << "60" << endl;
        else if (c[i] + d[i] * j > 60)
            cout << c[i] << endl;
        else
            cout << 60 - d[i] * 3 << endl;
    }
    return 0;
}

