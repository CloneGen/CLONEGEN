int main () {
    int a [6] [6], i, j, max [6] = {0, 0, 0, 0, 0, 0}, min [6] = {0}, h [6], l [6];
    for (i = 1; i <= 5; i++) {
        h[i] = 1;
        l[i] = 1;
    }
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++)
            cin >> a[i][j];
    }
    for (i = 1; i <= 5; i++)
        min[i] = a[1][i];
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (a[i][j] > max[i]) {
                max[i] = a[i][j];
                h[i] = j;
            }
            if (a[j][i] < min[i]) {
                min[i] = a[j][i];
                l[i] = j;
            }
        }
    }
    int x, y, m = 0;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++) {
            if (h[i] == j && l[j] == i) {
                x = i;
                y = j;
                m = m + 1;
            }
        }
    if (m == 0)
        cout << "not found" << endl;
    else
        cout << x << " " << y << " " << max[x] << endl;
    return 0;
}

