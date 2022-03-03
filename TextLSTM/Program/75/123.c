int main () {
    char x [5000], y [5000];
    int X [1000] = {0}, Y [1000] = {0};
    int t [1000] = {0};
    int i, j, k, p, max, m, n = 0, l1, l2;
    cin >> x >> y;
    l1 = strlen (x);
    l2 = strlen (y);
    j = 0;
    k = 0;
    for (i = 0; x[i] != '\0'; i++) {
        if (x[i] == ',')
            j++;
    }
    m = j + 1;
    p = j + 1;
    for (i = l1; i >= 0; i--) {
        if (x[i] >= '0' && x[i] <= '9') {
            X[m] += (x[i] - '0') * pow (10, k);
            k++;
        }
        else {
            m--;
            k = 0;
        }
    }
    k = 0;
    for (i = l2; i >= 0; i--) {
        if (y[i] >= '0' && y[i] <= '9') {
            Y[p] += (y[i] - '0') * pow (10, k);
            k++;
        }
        else {
            p--;
            k = 0;
        }
    }
    max = t[0];
    for (i = 0; i < 1000; i++) {
        for (k = 0; k <= j; k++) {
            if (X[k] <= i && Y[k] >= i + 1)
                t[i]++;
        }
        if (t[i] > max)
            max = t[i];
    }
    cout << j + 1 << ' ' << max << endl;
    return 0;
}

