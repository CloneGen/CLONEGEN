int main () {
    int a [100] [100], b [100] [100], c [100] [100], x1, y1, x2, y2, i, j, l;
    cin >> x1 >> y1;
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y1 - 1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (i = 0; i <= x2 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            c[i][j] = 0;
            for (l = 0; l <= x2 - 1; l++) {
                c[i][j] += a[i][l] * b[l][j];
            }
            if (j == 0)
                cout << c[i][j];
            else
                cout << " " << c[i][j];
        }
        cout << endl;
    }
    cin.get ();
    cin.get ();
    return 0;
}

