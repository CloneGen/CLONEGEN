int main () {
    int n, i, j, k, t;
    cin >> n;
    int a [20000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << a[0];
    for (j = 1; j < n; j++) {
        for (k = 0; k < j; k++)
            if (a[j] == a[k])
                break;
        if (k == j)
            cout << " " << a[j];
    }
    return 0;
}

