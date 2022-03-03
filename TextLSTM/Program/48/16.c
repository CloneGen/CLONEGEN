int temp [9] [9], a [9] [9];

void proliferation (int ds, int dd) {
    int m, n, j, k;
    if (dd == ds) {
        for (j = 0; j <= 8; j++) {
            for (k = 0; k <= 8; k++) {
                if (k == 0)
                    cout << a[j][k];
                else
                    cout << " " << a[j][k];
            }
            cout << endl;
        }
    }
    else if (dd < ds) {
        for (m = 4 - dd; m <= 4 + dd; m++) {
            for (n = 4 - dd; n <= 4 + dd; n++) {
                for (j = m - 1; j <= m + 1; j++) {
                    for (k = n - 1; k <= n + 1; k++) {
                        temp[j][k] += a[m][n];
                    }
                }
            }
        }
        dd++;
        for (j = 4 - dd; j <= 4 + dd; j++) {
            for (k = 4 - dd; k <= 4 + dd; k++) {
                a[j][k] = temp[j][k];
            }
        }
        proliferation (ds, dd);
    }
}

int main () {
    int ds, m;
    cin >> m >> ds;
    memset (temp, 0, sizeof (temp));
    memset (a, 0, sizeof (a));
    a[4][4] = m;
    temp[4][4] = m;
    proliferation (ds, 0);
    return 0;
}

