int main () {
    int k, n, b [20001], c [20001], i = 0, j = 1, l, m;
    cin >> n;
    for (l = 0; l < 20001; l++) {
        b[l] = 0;
    }
    for (m = 0; m < 20001; m++) {
        c[m] = 0;
    }
    while (j <= n) {
        cin >> k;
        if (b[k] == 0)
            c[i] = k;
        b[k]++;
        i++;
        j++;
    }
    cout << c[0];
    for (i = 1; i < n; i++) {
        if (c[i] != 0) {
            cout << " " << c[i];
        }
    }
    return 0;
}

