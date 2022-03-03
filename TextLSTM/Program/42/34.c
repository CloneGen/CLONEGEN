int main () {
    int a [100001] = {0}, n, number, i, j, b = 0, k;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> number;
        a[i] = number;
    }
    cin >> k;
    for (i = 0; i <= n - 1 - b;) {
        if (a[i] == k) {
            i = i;
            b++;
            for (j = i; j <= n - 1; j++)
                a[j] = a[j + 1];
        }
        else
            i++;
    }
    cout << a[0];
    for (i = 1; i <= n - b - 1; i++)
        cout << " " << a[i];
    return 0;
}

