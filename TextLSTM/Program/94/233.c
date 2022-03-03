int main () {
    int n;
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    int b [n], m = 0;
    for (int j = 0;
    j < n; j++) {
        if (a[j] % 2 != 0) {
            b[m] = a[j];
            m++;
        }
    }
    int temp, k;
    for (int p = 0;
    p < m - 1; p++) {
        for (k = 0; k < m - 1 - p; k++) {
            if (b[k] > b[k + 1]) {
                temp = b[k];
                b[k] = b[k + 1];
                b[k + 1] = temp;
            }
        }
    }
    for (int q = 0;
    q < m; q++) {
        if (q == 0)
            cout << b[q];
        else
            cout << "," << b[q];
    }
}

