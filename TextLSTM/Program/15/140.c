int main () {
    int n;
    cin >> n;
    int dt [n], i, j, k, p, q, N, sum = 0;
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n; i++)
            cin >> dt[i];
        for (p = 0; p < n; p++) {
            if (dt[p] == 0) {
                for (k = n - 1;; k--) {
                    if (dt[k] == 0) {
                        N = k;
                        break;
                    }
                }
                for (q = p; q <= N; q++) {
                    if (dt[q] != 0)
                        sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}

