int main () {
    int n, i, j, l, k;
    cin >> n;
    int a [20001];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n = n - 1;
                j = j - 1;
            }
        }
    }
    for (l = 0; l < n; l++)
        cout << a[l] << setw (3);
    return 0;
}

