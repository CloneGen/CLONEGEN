int main () {
    int n;
    int i, j, k;
    cin >> n;
    for (i = 0; i < n; ++i) {
        int sum = 0;
        int t [101] [101] = {0};
        for (j = 0; j < n; ++j) {
            for (k = 0; k < n; ++k) {
                cin >> t[j][k];
            }
        }
        int cnt = n;
        while (cnt > 1) {
            for (j = 0; j < cnt; ++j) {
                int min = t[j][0];
                for (k = 1; k < cnt; ++k) {
                    if (t[j][k] < min)
                        min = t[j][k];
                }
                for (k = 0; k < cnt; ++k) {
                    t[j][k] -= min;
                }
            }
            for (j = 0; j < cnt; ++j) {
                int min = t[0][j];
                for (k = 1; k < cnt; ++k) {
                    if (t[k][j] < min)
                        min = t[k][j];
                }
                for (k = 0; k < cnt; ++k) {
                    t[k][j] -= min;
                }
            }
            sum += t[1][1];
            for (j = 0; j < n; ++j) {
                for (k = 1; k < n; ++k) {
                    t[j][k] = t[j][k + 1];
                }
            }
            for (j = 0; j < n; ++j) {
                for (k = 1; k < n; ++k) {
                    t[k][j] = t[k + 1][j];
                }
            }
            cnt--;
        }
        cout << sum << endl;
    }
    return 0;
}

