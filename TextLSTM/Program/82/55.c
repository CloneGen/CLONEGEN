int main () {
    int n;
    cin >> n;
    int a [100] = {0};
    int b [100] = {0};
    int istep = 0;
    int m = 0;
    int i = 0;
    do {
        cin >> a[i] >> b[i];
        i++;
    }
    while (i < n);
    int c [100] = {0};
    do {
        if (a[istep] <= 140 && a[istep] >= 90 && b[istep] <= 90 && b[istep] >= 60) {
            c[istep] = m + 1;
            m++;
        }
        else
            m = 0;
        istep++;
    }
    while (istep < n);
    int e = 0;
    int d = 0;
    do {
        if (d < c[e])
            d = c[e];
        e++;
    }
    while (e < n);
    cout << d << endl;
    return 0;
}

