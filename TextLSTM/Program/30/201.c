int main () {
    int n, a [100], sum = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        a[i] = i;
        if (a[i] % 7 == 0 || a[i] == 17 || a[i] == 27 || a[i] == 37 || a[i] == 47 || a[i] == 57 || a[i] == 67 || a[i] == 87 || a[i] == 97 || (a[i] - 69 > 0 && a[i] - 80 < 0))
            a[i] = 0;
        sum = sum + a[i] * a[i];
    }
    cout << sum << endl;
    return 0;
}

