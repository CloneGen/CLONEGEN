int main () {
    int k, i, j;
    double a [10000], b [10000], dissq = 0;
    cin >> k;
    for (i = 0; i < k; i = i + 1) {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < k; i = i + 1) {
        for (j = 0; j < k; j = j + 1) {
            if ((a[j] - a[i]) * (a[j] - a[i]) + (b[j] - b[i]) * (b[j] - b[i]) > dissq) {
                dissq = (a[j] - a[i]) * (a[j] - a[i]) + (b[j] - b[i]) * (b[j] - b[i]);
            }
        }
    }
    cout << sqrt (dissq);
    return 0;
}

