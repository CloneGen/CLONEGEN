int main () {
    int n, i, a [100], sum = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        a[i] = i + 1;
        if (a[i] % 7 != 0 && a[i] % 10 != 7) {
            if (a[i] < 70 || a[i] > 79)
                sum = sum + pow ((float) a[i], 2);
        }
    }
    cout << sum << endl;
    return 0;
}

