int main () {
    int a [100] [100], b [100] [100];
    int x1, y1, x2, y2, i, j;
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            int t = 0;
            for (int p = 0;
            p < y1; p++) {
                t += a[i][p] * b[p][j];
            }
            if (j > 0)
                cout << " ";
            cout << t;
        }
        cout << endl;
    }
    return 0;
}

