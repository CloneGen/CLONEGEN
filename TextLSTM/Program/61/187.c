int fob (int j) {
    if (j == 1 || j == 2)
        return 1;
    else {
        int a = 1, b = 1, c;
        for (int k = 3;
        k <= j; k++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main () {
    int n, i;
    cin >> n;
    int a [n];
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++) {
        cout << fob (a[i]) << endl;
    }
    return 0;
}

