int main () {
    int n, i, j, k = 0;
    cin >> n;
    int a [n];
    cin >> a[0];
    cout << a[0];
    for (i = 1; i < n; i++) {
        cin >> a[i];
        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                k++;
        if (k == 0)
            cout << " " << a[i];
        k = 0;
    }
    return 0;
}

