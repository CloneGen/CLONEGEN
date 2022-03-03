int main () {
    int a [5] [5], b [5] = {5}, c [5] = {5}, i, j, max, min, jm = 0, im = 0, k = 0;
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
            cin >> a[i][j];
    for (i = 0; i <= 4; i++) {
        max = a[i][0];
        for (j = 0; j <= 4; j++) {
            if (a[i][j] >= max) {
                max = a[i][j];
                jm = j;
            }
        }
        b[i] = jm;
    }
    for (j = 0; j <= 4; j++) {
        min = a[0][j];
        for (i = 0; i <= 4; i++) {
            if (a[i][j] <= min) {
                min = a[i][j];
                im = i;
            }
        }
        c[j] = im;
    }
    for (i = 0; i <= 4; i++) {
        if (c[b[i]] == i) {
            cout << i + 1 << " " << b[i] + 1 << " " << a[i][b[i]];
            k++;
        }
    }
    if (k == 0)
        cout << "not found";
    return 0;
}

