int main () {
    int x1, y1, x2, y2, i, j, t;
    cin >> x1 >> y1;
    int a [x1] [y1];
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y1 - 1; j++)
            cin >> a[i][j];
    }
    cin >> x2 >> y2;
    int b [x2] [y2];
    for (i = 0; i <= x2 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++)
            cin >> b[i][j];
    }
    int c [x1] [y2];
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++)
            c[i][j] = 0;
    }
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            for (t = 0; t <= y1 - 1; t++)
                c[i][j] = a[i][t] * b[t][j] + c[i][j];
        }
    }
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            if (j == y2 - 1)
                cout << c[i][j] << endl;
            else
                cout << c[i][j] << " ";
        }
    }
    return 0;
}

