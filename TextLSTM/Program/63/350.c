int main () {
    int a [101] [101], b [101] [101];
    int x1, y1, x2, y2, i, j, k, c;
    cin >> x1 >> y1;
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y1; j++)
            cin >> a[i][j];
        cout << endl;
    }
    cin >> x2 >> y2;
    for (i = 1; i <= x2; i++) {
        for (j = 1; j <= y2; j++)
            cin >> b[i][j];
        cout << endl;
    }
    for (i = 1; i <= x1; i++)
        for (j = 1; j <= y2; j++) {
            c = 0;
            for (k = 1; k <= x2; k++)
                c = c + a[i][k] * b[k][j];
            if (j < y2)
                cout << c << " ";
            else
                cout << c << endl;
        }
    return 0;
}

