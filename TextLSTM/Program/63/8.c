int main () {
    int x1, y1, x2, y2, a [101] [101], b [101] [101], c [101] [101] = {0}, i, j, k;
    cin >> x1 >> y1;
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (i = 1; i <= x2; i++) {
        for (j = 1; j <= y2; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y2; j++) {
            for (k = 1; k <= y1; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            if (j == 1)
                cout << c[i][j];
            else
                cout << " " << c[i][j];
        }
        cout << endl;
    }
    return 0;
}

