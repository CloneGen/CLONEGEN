int main () {
    int n, i, a [101], b [101], h = 0, t = 0, m [101];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        if (90 <= a[i] && a[i] <= 140 && 60 <= b[i] && b[i] <= 90) {
            h++;
            m[i] = h;
        }
        else {
            m[i] = h;
            h = 0;
        }
    }
    t = m[1];
    for (i = 1; i <= n; i++) {
        if (t <= m[i]) {
            t = m[i];
        }
    }
    cout << t;
    return 0;
}

