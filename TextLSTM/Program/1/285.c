int fact (int n, int m);

int main () {
    int n, a [35000], i, b [35000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        b[i] = fact (a[i], 2);
    for (i = 0; i < n; i++)
        cout << b[i] << endl;
    return 0;
}

int fact (int n, int m) {
    int sum = 1, i, temp = 0;
    if (n < m)
        return 0;
    else if (n == 2)
        return 1;
    else {
        for (i = m; i < n; i++) {
            if (n % i == 0)
                sum = sum + fact (n / i, i);
        }
        return sum;
    }
}

