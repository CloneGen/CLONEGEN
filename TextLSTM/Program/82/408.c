int main () {
    int a = 0, b = 0, n = 0, i = 0, k = 0, s = 0;
    cin >> n;
    int c [n + 1];
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        c[i] = 0;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
            c[k] = c[k] + 1;
        else
            k = k + 1;
    }
    c[n] = 0;
    for (i = 0; i <= k; i++) {
        if (s < c[i])
            s = c[i];
    }
    cout << s;
    return 0;
}

