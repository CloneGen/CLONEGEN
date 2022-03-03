int way1 (int m, int n);
int way2 (int m, int n);

int way (int m, int n) {
    return way1 (m, n) + way2 (m, n);
}

int way1 (int m, int n) {
    int r;
    r = m % n;
    if (n == 1)
        return 1;
    if (m == 0 || m < n)
        return 0;
    if (m == n)
        return 1;
    return way (m - n, n);
}

int way2 (int m, int n) {
    if (n == 1)
        return 0;
    else
        return way (m, n - 1);
}

int main () {
    int k, i;
    cin >> k;
    int a [k + 1];
    int b [k + 1];
    for (i = 1; i <= k; i++) {
        cin >> a[i] >> b[i];
    }
    for (i = 1; i <= k; i++) {
        cout << way (a[i], b[i]) << endl;
    }
    return 0;
}

