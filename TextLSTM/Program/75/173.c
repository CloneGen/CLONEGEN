int main () {
    int a [1000];
    int b [1000];
    char str;
    int n = 0;
    while (1) {
        cin >> a[n];
        str = getchar ();
        if (str == '\n')
            break;
        n++;
    }
    n = 0;
    while (1) {
        cin >> b[n];
        str = getchar ();
        if (str == '\n')
            break;
        n++;
    }
    int min = 10000, max = 0, imax = 0;
    for (int i = 0;
    i <= n; i++) {
        if (a[i] <= min)
            min = a[i];
        if (b[i] > max)
            max = b[i];
    }
    for (int i = min;
    i <= max; i++) {
        int temp = 0;
        for (int k = 0;
        k <= n; k++)
            if ((a[k] <= i) && (b[k] > i))
                temp++;
        if (temp > imax)
            imax = temp;
    }
    cout << n + 1 << ' ' << imax;
    return 0;
}

