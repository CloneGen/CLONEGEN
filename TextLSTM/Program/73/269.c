int max (int a, int b, int c, int d, int e) {
    int p;
    if (a > b)
        p = a;
    else
        p = b;
    if (p < c)
        p = c;
    if (p < d)
        p = d;
    if (p < e)
        p = e;
    return p;
}

int min (int a, int b, int c, int d, int e) {
    int p;
    if (a < b)
        p = a;
    else
        p = b;
    if (p > c)
        p = c;
    if (p > d)
        p = d;
    if (p > e)
        p = e;
    return p;
}

int main () {
    int a [5] [5], i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    int k = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            if (max (a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]) == min (a[0][j], a[1][j], a[2][j], a[3][j], a[4][j])) {
                k++;
                int m, n;
                m = i + 1;
                n = j + 1;
                cout << m << ' ' << n << ' ' << max (a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]);
                break;
            }
        }
    if (k == 0)
        cout << "not found";
    return 0;
}

