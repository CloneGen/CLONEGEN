int main () {
    int n = 0, i = 0, j = 0, k = 0;
    float a [10000] = {0.0}, b [10000] = {0.0}, max = 0.0, s = 0.0, S = 0.0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
            S = pow (1.0 * (a[j] - a[k]), 2.0) + pow (1.0 * (b[j] - b[k]), 2.0);
            s = pow (1.0 * S, 0.5);
            if (s >= max)
                max = s;
        }
    }
    cout << max << endl;
    return 0;
}

