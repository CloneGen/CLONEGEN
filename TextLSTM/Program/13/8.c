int main () {
    int N, i, j, k, m = 0;
    cin >> N;
    const  int n = N;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n - m; i++)
        for (j = i; j <= n - m; j++) {
            if (a[i] == a[j + 1]) {
                for (k = j + 1; k < n - m; k++)
                    a[k] = a[k + 1];
                m++;
                j--;
            }
        }
    cout << a[0];
    for (i = 1; i < n - m; i++) {
        cout << " " << a[i];
    }
    return 0;
}

