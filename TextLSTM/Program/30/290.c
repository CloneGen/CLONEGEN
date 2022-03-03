int main () {
    int n, i, a [100], sum = 0;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        a[i] = i + 1;
        if (a[i] % 7 == 0 || a[i] / 10 == 7 || (a[i] - a[i] / 10 * 10 == 7))
            a[i] = 0;
        sum += a[i] * a[i];
    }
    cout << sum << endl;
    return 0;
}

