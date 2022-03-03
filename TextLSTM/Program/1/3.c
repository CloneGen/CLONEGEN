int f (int m, int n) {
    int i, sum = 0;
    if (n == 1)
        return 1;
    for (sum = 0, i = m; i <= n; i++)
        if (n % i == 0)
            sum += f (i, n / i);
    return sum;
}

int main () {
    int i, n, k;
    for (i = 0, cin >> n; i < n; i++) {
        cin >> k;
        cout << f (2, k) << endl;
    }
    return 0;
}

