int main () {
    int n, i;
    cin >> n;
    int a [1000], b [1000], p [1000] = {0};
    for (i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    if (a[0] >= 90 && a[0] <= 140 && b[0] >= 60 && b[0] <= 90)
        p[0] = 1;
    else
        p[0] = 0;
    for (i = 1; i < n; i++) {
        if (a[i] >= 90 && a[i] <= 140 && b[i] >= 60 && b[i] <= 90)
            p[i] = 1 + p[i - 1];
        else
            p[i] = 0;
    }
    for (i = 1; i < n; i++) {
        if (p[i] < p[i - 1])
            p[i] = p[i - 1];
    }
    cout << p[n - 1];
    return 0;
}

