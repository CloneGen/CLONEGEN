int main () {
    int n, k, a [1000], count = 0;
    cin >> n >> k;
    int i, j;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] != k)
                count = count + 1;
        }
    int m;
    m = n * (n - 1) / 2;
    if (count < m)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}

