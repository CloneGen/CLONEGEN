int main () {
    int a [5] [5];
    int i, j, k, l;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    }
    int b [5], c [5];
    int m;
    for (i = 0; i < 5; i++) {
        m = a[i][0], b[i] = 0;
        for (j = 1; j < 5; j++) {
            if (a[i][j] > m) {
                m = a[i][j];
                b[i] = j;
            }
        }
    }
    for (j = 0; j < 5; j++) {
        m = a[0][j];
        c[j] = 0;
        for (i = 1; i < 5; i++) {
            if (a[i][j] < m) {
                m = a[i][j];
                c[j] = i;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        if (c[b[i]] == i) {
            cout << i + 1 << " " << b[i] + 1 << " " << a[i][b[i]] << endl;
            break;
        }
    }
    if (i == 5)
        cout << "not found" << endl;
    return 0;
}

