int main () {
    int x1, y1, x2, y2, i, j, k;
    int a [101] [101] = {0};
    int b [101] [101] = {0};
    int c [101] [101] = {0};
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
            for (k = 1; k <= y1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    for (i = 1; i <= x1; i++) {
        cout << c[i][1];
        for (j = 2; j <= y2; j++) {
            cout << ' ' << c[i][j];
        }
        cout << endl;
    }
    cin.get ();
    cin.get ();
    return 0;
}

