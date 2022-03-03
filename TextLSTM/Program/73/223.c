int main () {
    int a [6] [6], p = 1, flag = 1;
    for (int i = 1;
    i <= 5; i++) {
        for (int j = 1;
        j <= 5; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1;
    i <= 5; i++) {
        int ans = 1;
        for (int j = 1;
        j <= 5; j++) {
            if (a[i][p] < a[i][j]) {
                p = j;
            }
        }
        for (int k = 1;
        k <= 5; k++) {
            if (a[i][p] > a[k][p]) {
                ans = 0;
            }
        }
        if (ans) {
            flag = 0;
            cout << i << ' ' << p << ' ' << a[i][p] << endl;
        }
    }
    if (flag) {
        cout << "not found" << endl;
    }
    return 0;
}

