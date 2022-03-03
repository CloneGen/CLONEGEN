int main () {
    int n, i, sum = 0;
    int a [100];
    cin >> n;
    for (i = 1; i <= n; i++) {
        a[i] = i;
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
            a[i] = 0;
        sum = sum + a[i] * a[i];
    }
    cout << sum;
    return 0;
}

