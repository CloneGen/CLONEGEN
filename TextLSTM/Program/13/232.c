int main () {
    int n, a [20001] = {0}, i, j, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--) {
            if (a[i] == a[j])
                a[j] = a[20000];
        }
    for (i = 0; i < n; i++) {
        if (a[i] != 0 && count == 0) {
            cout << a[i];
            count++;
        }
        else if (a[i] != 0)
            cout << " " << a[i];
    }
    return 0;
}

