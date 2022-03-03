int main () {
    int a [20001] = {0};
    int n = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a[i];
    }
    int b [20001] = {0};
    int c [20001] = {0};
    int l = 1;
    for (int j = 1;
    j <= n; j++) {
        for (int k = 0;
        k < j; k++) {
            if (a[j] == a[k]) {
                b[j] = 1;
            }
        }
    }
    for (int p = 1;
    p <= n; p++) {
        if (b[p] == 0) {
            c[l] = a[p];
            l = l + 1;
        }
    }
    for (int m = 1;
    c[m] > 0; m++) {
        if (c[m + 1] > 0)
            cout << c[m] << " ";
        if (c[m + 1] == 0)
            cout << c[m] << endl;
    }
    return 0;
}

