int main () {
    int a [6] [6] = {0}, l [6] = {0}, h [6] = {0}, i, j, flag = 1;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    for (i = 0; i < 5; i++) {
        l[i] = 0;
        for (int j = 0;
        j < 5; j++)
            if (a[i][j] > l[i])
                l[i] = a[i][j];
        h[i] = 100000000;
        for (int j = 0;
        j < 5; j++)
            if (a[j][i] < h[i])
                h[i] = a[j][i];
    }
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            if (a[i][j] == l[i] && a[i][j] == h[j]) {
                cout << i + 1 << ' ' << j + 1 << ' ' << a[i][j] << endl;
                flag = 0;
            }
        }
    if (flag)
        cout << "not found" << endl;
    return 0;
}

