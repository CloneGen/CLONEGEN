int main () {
    int i, n, a [100], b [100], c [100] = {0};
    cin >> n;
    int start = 0, t = 0, max = 0;
    for (i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        if ((a[i] >= 90) && (a[i] <= 140) && (b[i] >= 60) && (b[i] <= 90))
            c[i] = 1;
    }
    for (i = 1; i <= n + 1; i++) {
        if (c[i] == 0) {
            t = i - start - 1;
            start = i;
            if (max < t)
                max = t;
        }
    }
    cout << max;
}

