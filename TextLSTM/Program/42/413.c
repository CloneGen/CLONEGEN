int main () {
    int n, i = 0, j, k, t;
    cin >> n;
    t = n;
    int a [100000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    i = 0;
    while (i <= t) {
        j = i;
        while (a[j] == m) {
            j++;
            t--;
        }
        if (j - i) {
            for (k = i; k < n - (j - i); k++)
                a[k] = a[k + j - i];
            i = j;
        }
        else
            i++;
    }
    for (i = 0; i < t - 1; i++)
        cout << a[i] << ' ';
    cout << a[t - 1];
    return 0;
}

