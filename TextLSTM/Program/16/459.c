int main () {
    int n, i, a [5], t;
    cin >> n;
    a[0] = n / 1000;
    a[1] = (n - 1000 * a[0]) / 100;
    a[2] = (n - 1000 * a[0] - 100 * a[1]) / 10;
    a[3] = n - 1000 * a[0] - 100 * a[1] - 10 * a[2];
    if (n >= 1000) {
        cout << a[3] << a[2] << a[1] << a[0];
    }
    else if (n >= 100 && n < 1000) {
        cout << a[3] << a[2] << a[1];
    }
    else if (n >= 10 && n < 100) {
        cout << a[3] << a[2];
    }
    else if (n < 10)
        cout << n;
    return 0;
}

