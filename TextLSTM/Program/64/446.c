int main () {
    int n = 0, p = 0, s = 0, m = 0;
    cin >> n;
    double t = 0;
    int a [10] [3], b [45] [6], d [45];
    double c [45];
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < 3; j++)
            cin >> a[i][j];
    for (int i = 0;
    i < n - 1; i++)
        for (int j = i + 1;
        j < n; j++) {
            for (int k = 0;
            k < 3; k++) {
                b[p][k] = a[i][k];
                b[p][k + 3] = a[j][k];
            }
            c[p] = sqrt ((double) ((b[p][0] - b[p][3]) * (b[p][0] - b[p][3]) + (b[p][1] - b[p][4]) * (b[p][1] - b[p][4]) + (b[p][2] - b[p][5]) * (b[p][2] - b[p][5])));
            d[p] = p;
            p = p + 1;
        }
    for (int i = 0;
    i < p - 1; i++)
        for (int j = 0;
        j < p - 1 - i; j++) {
            if (c[j] < c[j + 1]) {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
                s = d[j];
                d[j] = d[j + 1];
                d[j + 1] = s;
            }
        }
    for (int i = 0;
    i < p; i++) {
        m = d[i];
        cout << "(" << b[m][0] << "," << b[m][1] << "," << b[m][2] << ")-(" << b[m][3] << "," << b[m][4] << "," << b[m][5] << ")=";
        printf ("%.2f", c[i]);
        cout << endl;
    }
    return 0;
}

