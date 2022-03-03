int main () {
    int p, q, r, i, j, k;
    int a [101] [101], b [101] [101], c [101] [101];
    cin >> p >> q;
    for (i = 1; i <= p; i++) {
        for (j = 1; j <= q; j++) {
            cin >> a[i - 1][j - 1];
        }
    }
    cin >> q >> r;
    for (i = 1; i <= q; i++) {
        for (j = 1; j <= r; j++) {
            cin >> b[i - 1][j - 1];
        }
    }
    for (i = 0; i <= 100; i++) {
        for (j = 0; j <= 100; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i <= p - 1; i++) {
        for (j = 0; j <= r - 1; j++) {
            for (k = 0; k <= q; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i <= p - 1; i++) {
        for (j = 0; j <= r - 1; j++) {
            if (j != (r - 1))
                cout << c[i][j] << " ";
            else
                cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}

