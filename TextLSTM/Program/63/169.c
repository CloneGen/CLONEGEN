int main () {
    int x1, y1, x2, y2, i, j, k, m;
    int a [101] [101] = {0};
    int b [101] [101] = {0};
    int c [101] [101] = {0};
    cin >> x1 >> y1;
    for (i = 1; i <= x1; i++)
        for (j = 1; j <= y1; j++)
            cin >> a[i][j];
    cin >> x2 >> y2;
    for (i = 1; i <= x2; i++)
        for (j = 1; j <= y2; j++)
            cin >> b[i][j];
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y2; j++) {
            for (k = 1, m = 1; k <= y1 && m <= x2; k++, m++) {
                c[i][j] = c[i][j] + a[i][k] * b[m][j];
            }
            if (j < y2)
                cout << c[i][j] << " ";
            else
                cout << c[i][j] << endl;
        }
    }
    return 0;
}

