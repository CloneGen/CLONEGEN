int main () {
    int n, i, j = 0;
    cin >> n;
    int a [n], b [n], c [n], d [n];
    for (i = 0; i < n; i++) {
        d[i] = 0;
        cin >> a[i] >> b[i];
        if (90 <= a[i] && a[i] <= 140 && 60 <= b[i] && b[i] <= 90)
            c[i] = 1;
        else
            c[i] = 0;
    }
    for (i = 0; i < n; i++) {
        if (c[i] == 1)
            d[j] = d[j] + 1;
        else
            j++;
    }
    int tmax = 0;
    for (j = 0; j < n; j++)
        if (tmax < d[j])
            tmax = d[j];
    cout << tmax;
    return 0;
}

