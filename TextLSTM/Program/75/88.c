int main () {
    int a [1001], b [1001], count [1001];
    int i, j, n, max, min, maxcount;
    char x [100000], y [100000];
    cin >> x;
    n = 1, a[1] = 0;
    for (i = 0;; i++) {
        if (x[i] == ',') {
            n = n + 1;
            a[n] = 0;
        }
        else if (x[i] == '\0')
            break;
        else {
            a[n] = a[n] * 10 + x[i] - 48;
        }
    }
    cin >> y;
    n = 1, b[1] = 0;
    for (i = 0;; i++) {
        if (y[i] == ',') {
            n = n + 1;
            b[n] = 0;
        }
        else if (y[i] == '\0')
            break;
        else {
            b[n] = b[n] * 10 + y[i] - 48;
        }
    }
    max = 0, min = 1000;
    for (i = 1; i <= n; i++) {
        if (max < b[i])
            max = b[i];
        if (min > a[i])
            min = a[i];
    }
    maxcount = 0;
    for (i = min; i <= max - 1; i++) {
        count[i] = 0;
        for (j = 1; j <= n; j++)
            if (a[j] <= i && b[j] >= i + 1)
                count[i] = count[i] + 1;
        if (maxcount < count[i])
            maxcount = count[i];
    }
    cout << n << " " << maxcount << endl;
    return 0;
}

