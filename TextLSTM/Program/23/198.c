int main () {
    char a [100], c [100] [100], b;
    int i = 0, j, m = 0, d [100], n = 0;
    while (scanf ("%c", &b)) {
        if (b != '\n') {
            a[i] = b;
            i++;
        }
        if (b == '\n')
            break;
    }
    for (j = 0; j < i; j++) {
        if (a[j] != ' ') {
            c[n][m] = a[j];
            m++;
        }
        if (a[j] == ' ') {
            n++;
            d[n - 1] = m;
            m = 0;
        }
    }
    d[n] = m;
    for (j = n; j > 0; j--) {
        for (m = 0; m < d[j]; m++) {
            cout << c[j][m];
        }
        cout << " ";
    }
    for (m = 0; m < d[0]; m++) {
        cout << c[0][m];
    }
    return 0;
}

