int main () {
    int n;
    cin >> n;
    int c [200] = {0};
    c[0] = 1;
    int i, j, k;
    int m = 0;
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            c[j] *= 2;
        }
        for (j = 0; j <= m; j++) {
            if (c[j] >= 10) {
                c[j] -= 10;
                c[j + 1]++;
            }
        }
        if (!c[m + 1])
            m++;
    }
    int o = 0;
    for (i = 199; i >= 0; i--) {
        if (c[i]) {
            cout << c[i];
            o = 1;
        }
        else if (o)
            cout << c[i];
    }
    cout << endl;
    return 0;
}

