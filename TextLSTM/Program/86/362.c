int main () {
    int n, i, j, k, m, find, c;
    int a [1000] [20], b [1000], sum [1000];
    cin >> n;
    for (i = 0; i < n; i++) {
        find = 0;
        cin >> m;
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i] = a[i][j] + 3 * (j + 1);
            if (b[i] > 60) {
                find = 1;
                c = j;
                if (c < m - 1) {
                    for (k = c + 1; k < m; k++) {
                        cin >> a[i][k];
                    }
                }
                break;
            }
        }
        if (find == 0) {
            sum[i] = 60 - 3 * m;
        }
        else {
            if (b[i] == 61)
                sum[i] = 60 - 3 * c - 2;
            else if (b[i] == 62)
                sum[i] = 60 - 3 * c - 1;
            else if (b[i] == 60)
                sum[i] = 60 - 3 * c - 3;
            else
                sum[i] = 60 - 3 * c;
        }
    }
    for (i = 0; i < n; i++) {
        cout << sum[i] << endl;
    }
    return 0;
}

