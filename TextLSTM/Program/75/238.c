int main () {
    char c;
    int x [1010] = {0}, y [1010] = {0}, i, n, high [3000] = {0}, a, b, j, big;
    n = 1;
    i = 2;
    cin >> a;
    x[1] = a;
    while ((c = cin.get ()) == ',') {
        cin >> a;
        x[i] = a;
        i++;
        n++;
    }
    cin >> y[1];
    for (i = 2; i <= n; i++) {
        cin >> c;
        cin >> y[i];
    }
    for (i = 1; i <= n; i++)
        for (j = x[i]; j < y[i]; j++)
            high[j]++;
    big = high[1];
    for (j = 1; j <= 3000; j++)
        if (high[j] > big)
            big = high[j];
    cout << n << ' ' << big;
}

