int main () {
    int i, n, a [100] = {0}, b [100] = {0}, x, h;
    cin >> n;
    x = 0;
    h = 0;
    for (i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] <= 140 && a[i] >= 90 && b[i] <= 90 && b[i] >= 60)
            x = x + 1;
        else if (x >= h) {
            h = x;
            x = 0;
        }
        else
            x = 0;
    }
    if (x >= h)
        h = x;
    cout << h << endl;
    return 0;
}

