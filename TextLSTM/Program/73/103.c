int main () {
    int a [5] [5], maxr [5], e [5], f [5], max, g, count = 0;
    for (int i = 0;
    i < 5; i++)
        for (int j = 0;
        j < 5; j++)
            cin >> a[i][j];
    for (int k = 0;
    k < 5; k++) {
        max = a[k][0];
        f[k] = 0;
        for (int t = 0;
        t < 5; t++) {
            if (a[k][t] > max) {
                max = a[k][t];
                f[k] = t;
            }
        }
        maxr[k] = max;
        e[k] = k;
    }
    for (int p = 0;
    p < 5; p++) {
        g = 0;
        for (int q = 0;
        q < 5; q++) {
            if (maxr[p] > a[q][f[p]]) {
                g = 1;
                break;
            }
        }
        if (g == 0) {
            cout << e[p] + 1 << " " << f[p] + 1 << " " << maxr[p] << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "not found" << endl;
    return 0;
}

