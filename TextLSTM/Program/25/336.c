int shumu (int a []);

int main () {
    int N, a [100], i, m, j;
    cin >> N;
    memset (a, 0, sizeof a);
    a[0] = 2;
    if (N == 0) {
        cout << 1 << endl;
    }
    else if (N == 1) {
        cout << 2 << endl;
    }
    else {
        for (i = 1; i <= N -1; i++) {
            m = shumu (a) + 1;
            for (j = 0; j < m; j++) {
                a[j] = a[j] * 2;
            }
            for (j = 0; j < m; j++) {
                if (a[j] >= 10) {
                    a[j + 1]++;
                    a[j] = a[j] - 10;
                }
            }
        }
        if (a[m] == 0) {
            for (i = m - 1; i >= 0; i--) {
                cout << a[i];
            }
            cout << endl;
        }
        else if (a[m] != 0) {
            for (i = m; i >= 0; i--) {
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}

int shumu (int a []) {
    int k;
    for (k = 99; a[k] == 0; k--) {
    }
    return k;
}

