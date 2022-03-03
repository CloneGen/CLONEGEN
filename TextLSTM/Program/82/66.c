int main () {
    int n = 0, i = 0, j = 0, k = 0, s = 0;
    cin >> n;
    int c [101];
    int a, b;
    for (; i < n; i++) {
        cin >> a >> b;
        c[i] = 0;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
            c[k] = c[k] + 1;
        else
            k = k + 1;
    }
    c[n + 1] = 0;
    for (; j <= k; j++) {
        if (s < c[j])
            s = c[j];
    }
    cout << s << endl;
    return 0;
}

