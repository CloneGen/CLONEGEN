int main () {
    int n = 0, i = 0, j = 0, k = 0, s = 0;
    cin >> n;
    int a [101], b [101], c [101];
    for (; i < n; i++) {
        cin >> a[i] >> b[i];
        c[i] = 0;
        if (a[i] >= 90 && a[i] <= 140 && b[i] >= 60 && b[i] <= 90)
            c[k] = c[k] + 1;
        else
            k = k + 1;
    }
    c[n] = 0;
    c[n + 1] = 0;
    for (; j <= k; j++) {
        if (s < c[j])
            s = c[j];
    }
    cout << s;
    return 0;
}

