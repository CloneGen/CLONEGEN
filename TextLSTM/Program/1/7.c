int yinshu (int n, int m) {
    int i, sum = 0;
    if (n == 1)
        return 1;
    for (i = m; i <= n; i++) {
        if (n % i == 0)
            sum += yinshu (n / i, i);
    }
    return sum;
}

int main () {
    int n, i, m;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> m;
        cout << yinshu (m, 2) << endl;
    }
    return 0;
}

