int main () {
    int x1, x2, y1, y2, a [110] [110] = {0}, b [110] [110] = {0}, c [110] [110] = {0};
    int i = 0, j = 0, m = 0, n = 0, p = 0, q = 0, l = 0, k = 0, h = 0;
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++)
            cin >> a[i][j];
    }
    cin >> x2 >> y2;
    for (m = 0; m < x2; m++) {
        for (n = 0; n < y2; n++)
            cin >> b[m][n];
    }
    for (p = 0; p < x1; p++) {
        for (q = 0; q < y2; q++) {
            for (l = 0; l < y1; l++)
                c[p][q] += a[p][l] * b[l][q];
        }
    }
    for (k = 0; k < x1; k++) {
        for (h = 0; h < y2; h++) {
            cout << c[k][h];
            if (h != y2 - 1)
                cout << ' ';
            else
                cout << endl;
        }
    }
    return 0;
}

