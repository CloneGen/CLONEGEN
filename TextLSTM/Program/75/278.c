int main () {
    int a [1000];
    for (int i = 0;
    i < 1000; i++)
        a[i] = 0;
    int n = 0, x, y;
    char ch = ',';
    while (ch == ',') {
        cin >> x;
        ch = cin.get ();
        for (int j = x;
        j < 1000; j++)
            a[j]++;
        n++;
    }
    ch = ',';
    while (ch == ',') {
        cin >> y;
        ch = cin.get ();
        for (int m = y;
        m < 1000; m++)
            a[m] = a[m] - 1;
    }
    int max = 0;
    for (int k = 0;
    k < 1000; k++) {
        if (a[k] > max)
            max = a[k];
    }
    cout << n << " " << max;
    return 0;
}

