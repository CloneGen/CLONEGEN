int main () {
    int x1, x2, y2, a [100] [100], b [100] [100], c [100] [100] = {0}, i, j, k, num = 0;
    cin >> x1 >> x2;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < x2; j++)
            cin >> a[i][j];
    }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++)
            cin >> b[i][j];
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            for (k = 0; k < x2; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            cout << c[i][j];
            num++;
            if (num % y2 == 0)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}

