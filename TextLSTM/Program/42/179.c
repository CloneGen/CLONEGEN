int main () {
    int n, k, i, j, l, m, jishu;
    cin >> n;
    int a [1000001] = {0};
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    jishu = 0;
    for (j = 0; j < n; j++) {
        do {
            if (a[j] == k) {
                jishu = jishu + 1;
                a[j] = a[j + 1];
                for (l = j + 1; l < n; l++) {
                    a[l] = a[l + 1];
                }
            }
        }
        while (a[j] == k);
    }
    for (i = 0; i < (n - jishu); i++) {
        if (i == 0)
            cout << a[0];
        if (i != 0)
            cout << " " << a[i];
    }
    return 0;
}

