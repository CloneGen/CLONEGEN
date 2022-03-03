int main () {
    int n, i, sum [100], b [100], c [100], f [100], total = 0, max = 0, x = 0;
    char a [100] [20], d [100], e [100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i] >> f[i];
    }
    for (i = 0; i < n; i++) {
        sum[i] = 0;
        if (b[i] > 90) {
            sum[i] = sum[i] + 2000;
        }
        if ((c[i] > 80) && (d[i] == 'Y')) {
            sum[i] = sum[i] + 850;
        }
        if ((b[i] > 85) && (e[i] == 'Y')) {
            sum[i] = sum[i] + 1000;
        }
        if ((b[i] > 85) && (c[i] > 80)) {
            sum[i] = sum[i] + 4000;
        }
        if ((b[i] > 80) && (f[i] >= 1)) {
            sum[i] = sum[i] + 8000;
        }
        total = total + sum[i];
        if (sum[i] > max) {
            max = sum[i];
            x = i;
        }
    }
    cout << a[x] << endl;
    cout << max << endl;
    cout << total << endl;
    return 0;
}

