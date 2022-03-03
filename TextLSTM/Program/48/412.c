int a [9] [9] = {0};
int b [9] [9] = {0};
int x [8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int y [8] = {-1, -1, -1, 0, 0, 1, 1, 1};

int main () {
    int p, q, i;
    int m, n;
    cin >> m >> n;
    a[4][4] = m;
    for (; n > 0; n--) {
        for (p = 0; p < 9; p++)
            for (q = 0; q < 9; q++) {
                for (i = 0; i < 8; i++)
                    b[p + x[i]][q + y[i]] += a[p][q];
                b[p][q] += a[p][q] * 2;
            }
        for (p = 0; p < 9; p++)
            for (q = 0; q < 9; q++) {
                a[p][q] = b[p][q];
                b[p][q] = 0;
            }
    }
    for (p = 0; p < 9; p++) {
        for (q = 0; q < 8; q++)
            cout << a[p][q] << " ";
        cout << a[p][8] << endl;
    }
    return 0;
}

