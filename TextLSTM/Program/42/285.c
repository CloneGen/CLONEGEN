int main () {
    int flag = 0, n, i, num, j, a [100000];
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cin >> num;
    for (i = 0; i <= n - 1; i++)
        if (a[i] == num) {
            for (j = i; j <= n - 2; j++)
                a[j] = a[j + 1];
            i = i - 1;
            n = n - 1;
        }
    for (i = 0; i <= n - 1; i++) {
        if (flag == 0) {
            cout << a[i];
            flag = 1;
            continue;
        }
        cout << " " << a[i];
    }
    return 0;
}

