int f (int, int);

int main () {
    int n, i, a [50];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        cout << f (a[i], 2) << endl;
    }
    return 0;
}

int f (int n, int p) {
    int sum = 0, m;
    for (m = p; m <= n; m++)
        if (n % m == 0) {
            if (m < n)
                sum = sum + f (n / m, m);
            if (m == n)
                sum = sum + 1;
        }
    return sum;
}

