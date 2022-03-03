int f (int n, int m);

int main () {
    int n, num, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        cout << f (num, 2) << endl;
    }
    return 0;
}

int f (int n, int m) {
    int i, count = 0;
    if (n == 1)
        return 1;
    for (i = m; i <= n; i++) {
        if (n % i == 0)
            count += f (n / i, i);
    }
    return count;
}

