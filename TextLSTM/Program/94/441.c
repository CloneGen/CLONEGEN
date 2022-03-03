int main () {
    int N, a [501], i, m, j, b [501], p = 1;
    cin >> N;
    for (i = 1; i <= 500; i++) {
        a[i] = -1;
        b[i] = -1;
    }
    for (i = 1; i <= N; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= N -1; i++) {
        for (j = 1; j <= N -i; j++) {
            if (a[j] > a[j + 1]) {
                m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;
            }
        }
    }
    for (i = 1; i <= 499; i++) {
        if (a[i] % 2 != 0 && a[i] != -1) {
            b[p] = a[i];
            p = p + 1;
        }
    }
    for (i = 1; i <= 499; i++) {
        if (b[i] != -1 && b[i + 1] != -1) {
            cout << b[i] << ",";
            m = i + 1;
        }
    }
    cout << b[m] << endl;
    return 0;
}

