int main () {
    int n, i, j = 0, k, l, t;
    cin >> n;
    int a [n], b [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0) {
            b[j] = a[i];
            j++;
        }
    for (k = 1; k <= j - 1; k++)
        for (l = 0; l <= j - 1 - k; l++)
            if (b[l] > b[l + 1]) {
                t = b[l];
                b[l] = b[l + 1];
                b[l + 1] = t;
            }
    cout << b[0];
    for (k = 1; k < j; k++)
        cout << "," << b[k];
    return 0;
}

